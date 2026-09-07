#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        prefix[0]=1;
        suffix[n-1]=1;
        for(int i = 1 ; i < n ; i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int j = n-2 ; j >= 0 ; j-- ){
            suffix[j]= suffix[j+1]*nums[j+1];
        }

        for(int k = 0 ; k < n ; k++){
            answer[k] = prefix[k]*suffix[k];
        }

        return answer ;

            

    }

    
};


int main(){
    vector<int> height = {1,2,3,4};

    Solution hello;               // Create object of Solution class

    vector<int> ans = hello.productExceptSelf(height); // Call the member function and make the object and return type same 
                                                       //in this case its vector<int> ans since the productExceptSelf return same
                                                       

    for(int x : ans){
        cout << x << " ";
    }   

    return 0;
}

