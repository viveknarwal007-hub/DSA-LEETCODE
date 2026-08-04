#include <iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr , int target){
    int st = 0 , end = arr.size();
    while(st <= end){
        int mid = st + (st -end )/2; 
        if(target > arr[mid]){
            st = mid +1 ;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1 ;
}

int main(){

    vector<int> arr1 = {-1,0,2,3,8,9,11,45};
    int target = 2;
    cout <<BinarySearch(arr1,target)<<endl;
}


// optimisations can be made on mid calculation to avoid integer max value overflow tht is mid = st + (end - st)/2