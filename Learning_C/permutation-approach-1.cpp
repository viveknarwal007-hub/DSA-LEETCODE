#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
        void recurpermute(vector<int>& ds,vector<int>& nums, vector<vector<int>>& ans, int freq[]){
            if(ds.size()==nums.size()){
                ans.push_back(ds);
                return;
            }
            for(int i=0;i<nums.size();i++){
                if(!freq[i]){
                    ds.push_back(nums[i]);
                    freq[i]=1;
                    recurpermute(ds,nums,ans,freq);
                    freq[i]=0;
                    ds.pop_back();
                }
            }
            
        }
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> ds;
            int freq[nums.size()];
            memset(freq,0,sizeof(freq));
            recurpermute(ds,nums,ans,freq);
            return ans;
        }
};
int main(){
    vector<int> nums={1,2,3};
    solution obj;
    vector<vector<int>> ans=obj.permute(nums);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}