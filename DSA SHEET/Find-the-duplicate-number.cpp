#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set<int> s;

        // for(int val : nums){
        //     if(s.find(val) != s.end()){
        //         return val ;
        //     }
        //     s.insert(val);
        // }
        // return -1 ;
        

        // more optimal approahc called slow-fast pointer with O(1) space complexity
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};

int main() {
    vector<int> nums = {3,1,2,2,5};

    Solution obj;
    auto ans = obj.findDuplicate(nums);

    cout << ans << endl;

    return 0;
}