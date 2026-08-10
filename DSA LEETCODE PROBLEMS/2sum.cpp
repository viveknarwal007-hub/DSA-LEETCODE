// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// gonna use hashing(maps or sets) for this one 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > m ;
        vector<int> ans ;
        for(int i = 0 ; i < nums.size(); i++){
            int first = nums[i];
            int second = target - first ; 

            if(m.find(second) != m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int tar = 6;

    Solution obj;
    auto ans = obj.twoSum(nums, tar);

    for(int x : ans){
        cout << x << " ";
    }


    return 0;
}