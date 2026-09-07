#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:

//     void func(vector<int>& nums, int start, vector<int>& ds, vector<vector<int>>& ans) {
//         ans.push_back(ds);

//         for(int i = start; i < nums.size(); i++) {

//             if(i > start && nums[i] == nums[i - 1])
//                 continue;

//             ds.push_back(nums[i]);

//             func(nums, i + 1, ds, ans);

//             ds.pop_back();
//         }
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         vector<vector<int>> ans;
//         vector<int> ds;

//         func(nums, 0, ds, ans);

//         return ans;
//     }
// };



class Solution {
public:

    void func(vector<int>& arr, int i, set<vector<int>>& tempans, vector<int>& ds) {
        if(i == arr.size()) {
            tempans.insert(ds);
            return;
        }

        ds.push_back(arr[i]);
        func(arr, i + 1, tempans, ds);

        ds.pop_back();
        func(arr, i + 1, tempans, ds);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> ds;
        set<vector<int>> tempans;

        func(nums, 0, tempans, ds);

        vector<vector<int>> ans(tempans.begin(), tempans.end());

        return ans;
    }
};


int main() {

    Solution obj;

    vector<int> nums = {1, 2, 2};

    vector<vector<int>> ans = obj.subsetsWithDup(nums);

    for(auto subset : ans) {
        cout << "[ ";

        for(auto x : subset) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}