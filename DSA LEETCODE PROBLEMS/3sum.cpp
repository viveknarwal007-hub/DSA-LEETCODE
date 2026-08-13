#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            // Most Optimised Approach (2 Pointer)
            const int n = nums.size();
            vector<vector<int>> ans;
            sort(nums.begin() , nums.end());

            for(int i = 0 ; i <n ; i++){
                if(i > 0 && nums[i] == nums[i-1]) continue ;
                int j = i+1 ,k = n-1;
                while(j < k){
                    if(const int sum = nums[i] + nums[j] + nums[k]; sum < 0 ){
                        j++ ;
                    }
                    else if(sum > 0 ){
                        k--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k]});
                        j++ ; k--;
                        while(j < k && nums[j]==nums[j-1]) j++;
                    }
                }
            }
            return  ans;




            // Good approach but still gives TLE
            // set<vector<int>> ans;
            // int n = nums.size();
            //
            // for (int i = 0; i < n; i++) {
            //     int target = -nums[i];
            //     set<int> st;
            //
            //     for (int j = i + 1; j < n; j++) {
            //         int c = target - nums[j];
            //
            //         if (st.find(c) != st.end()) {
            //             vector<int> temp = {nums[i], nums[j], c};
            //             sort(temp.begin(), temp.end());
            //             ans.insert(temp);
            //         }
            //
            //         st.insert(nums[j]);
            //     }
            // }
            //
            // return vector<vector<int>>(ans.begin(), ans.end());
        }
    };

int main() {
    vector<int> nums = {0,0,0};

    Solution obj;
    const auto ans = obj.threeSum(nums);

    for (const auto& row : ans) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

