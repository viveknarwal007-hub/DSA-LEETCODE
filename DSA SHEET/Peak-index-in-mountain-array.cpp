// O(n) time complexity 

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int max = arr[0];
//         int n = arr.size();
//         int ans = 0;
//         for(int i = 1 ; i < n ; i++){
//             if(arr[i]>max){
//                 max = arr[i];
//                 ans = i;
//             }
        
//         }
//         return ans ;
//     }
// }; 


//O(logn) time complexity
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            int st = 0;
            int end = arr.size() - 1;

            while (st < end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] < arr[mid + 1]) {
            st = mid + 1;
            } 
            else{
            end = mid;
            }
        }

        return st;
    }
};

int main(){
    vector<int> hello = {0,10,5,2};
    Solution obj;
    int ans = obj.peakIndexInMountainArray(hello);
    cout << ans << endl ;
}