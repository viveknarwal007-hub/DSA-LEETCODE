#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {10 , 22,22, 12 , 3 , 0 , 6};
    int n = arr.size();
    vector<int> ans;
    ans.push_back(arr[n-1]);
    int max = arr[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i]>=max){
            max = arr[i];
            ans.push_back(arr[i]);

        }
        else{
            continue;
        }
    }
    reverse(ans.begin(), ans.end());

    for(auto x : ans){
        cout << x << " ";
    }
    return 0;

}