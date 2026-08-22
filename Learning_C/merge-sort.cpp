#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr , int low , int mid , int high){
    vector<int> temparr = {};
    int left = low ; 
    int right = mid +1 ; 
    while (left <= mid && right <= high)
    {
        if(arr[left] <= arr[right]){
            temparr.push_back(arr[left]) ;
            left++;
        }
        else{
            temparr.push_back(arr[right]) ;
            right++;
        }
    }
    while(left <= mid){
        temparr.push_back(arr[left]) ;
        left++;
    }
    while (right <= high)   
    {
        temparr.push_back(arr[right]) ;
        right++;
    }
    
    for(int i = low; i <= high; i++) {
        arr[i] = temparr[i - low];
    }
    
}

void mergeSort(vector<int> &arr , int low , int high){
    if(low >= high) return ; 
    int mid = low + (high - low )/2;
    mergeSort(arr , low , mid);
    mergeSort(arr , mid+1 , high);
    merge(arr , low ,mid, high);

}
int main() {
    vector<int> arr = {3,2,4,1,3};
    int low = 0 ; 
    int high = arr.size() -1 ;

    mergeSort(arr , low , high);
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}