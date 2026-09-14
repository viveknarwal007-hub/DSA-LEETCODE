#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>> ans ;
        sort(nums.begin(), nums.end());
        int low = nums[0][0];
        int high = nums[0][1];
        
        for(int i = 1 ; i < n ; i++){
            if(nums[i][0] <= high){
                high = max(high , nums[i][1]);
            }
            else{
                ans.push_back({low,high});
                low = nums[i][0];
                high = nums[i][1];
            }
        }
        ans.push_back({low,high});
        return ans;
    }
};
int main() {
    vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
    Solution obj;
    vector<vector<int>> ans = obj.merge(nums);
    for(auto x : ans) {
        cout << "[" << x[0] << "," << x[1] << "] ";
    }
    cout << endl;
    return 0;
}