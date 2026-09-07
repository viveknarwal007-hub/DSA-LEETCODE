#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void recurpermute(vector<int>& ds,
                      vector<int>& nums,
                      vector<vector<int>>& ans,
                      vector<int>& freq) {

        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (!freq[i]) {

                ds.push_back(nums[i]);
                freq[i] = 1;

                recurpermute(ds, nums, ans, freq);

                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);

        recurpermute(ds, nums, ans, freq);

        return ans;
    }
};

int main() {

    // Test case
    vector<int> nums = {1, 2, 3};

    Solution sol;

    vector<vector<int>> result = sol.permute(nums);

    // Print all permutations
    for (const auto& permutation : result) {
        cout << "[ ";

        for (int num : permutation) {
            cout << num << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}