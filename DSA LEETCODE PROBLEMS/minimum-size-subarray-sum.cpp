#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int mini = INT_MAX;
        int left = 0;
        int right = 0;
        while(right < n){
            sum += nums[right];
            while (left <= right && sum >= target) 
            {
                mini = min(mini , right - left +1 );
                sum -= nums[left];
                left++ ;
            }
            
            right++;

        }

        return mini ;
    }
    
};

int main() {
    vector<int> nums = {1,4,4};
    int tar = 4;

    Solution obj;
    auto ans = obj.minSubArrayLen(tar , nums);

    cout << ans << endl;

    return 0;
}