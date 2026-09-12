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