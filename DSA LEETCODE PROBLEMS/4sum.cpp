#include <bits/stdc++.h>
using namespace std;

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // we fix the value of a and b and move c and d as 2 pointers
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();


        for (int a = 0; a < n - 3; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;

            for (int b = a + 1; b < n - 2; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;

                int c = b + 1;
                int d = n - 1;

                while (c < d) {
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];

                    if (sum < target) {
                        c++;
                    }
                    else if (sum > target) {
                        d--;
                    }
                    else {
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});

                        c++;
                        d--;

                        while (c < d && nums[c] == nums[c - 1]) c++;
                        while (c < d && nums[d] == nums[d + 1]) d--;
                    }
                }
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    Solution obj;
    auto ans = obj.fourSum(nums , target);

    for (const auto& row : ans) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}