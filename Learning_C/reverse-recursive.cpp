#include <iostream>
#include<vector>
using namespace std;

void func(int i , int j , vector<int> &nums){
    if(i >= j) return ;
    swap(nums[i] , nums[j]);
    func(i+1 , j-1 , nums);
}

bool palindrome(int i, int j, string s){
    if(i >= j) return true;

    if(s[i] != s[j]) return false;

    return palindrome(i + 1, j - 1, s);
}

int main() {
    vector<int> nums = {5,4,3,2,1,0,-1,-2};
    string  palin = "MADAM";
    // func(0 , 7 , nums);
    // for(int x : nums){
    //     cout << x << " ";
    // }
    if(palindrome(0 , palin.length() -1 , palin)){
        
        cout << "palindrome" << endl;
    }
    else{
        cout << "not palindrome" << endl ;
    }
    return 0;
}