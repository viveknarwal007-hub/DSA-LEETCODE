#include <iostream>
#include<vector>
using namespace std;
int partitionIdx(vector<int> &arr , int low , int high){
    int pivot = arr[low];
    int i = low ;
    int j = high; 
    while(i < j) {
        while(arr[i] <= pivot && i <= high -1  ){
            i++;
        }
        while (arr[j] > pivot && j >= low +1 )
        {
            j--;
        }
        if(i < j ) swap(arr[i] , arr[j]);
        
    }
    swap(arr[low ]  , arr[j]);
    return j;
}

void quickSort(vector<int> &arr , int low , int high){

    if(low < high){
        int partIdx = partitionIdx(arr , low , high);
        quickSort(arr , low , partIdx -1 );
        quickSort(arr , partIdx +1 , high );

    }
}

int main() {
    vector<int> arr = {3,2,4,1,3};
    int low = 0 ; 
    int high = arr.size() -1 ;

    quickSort(arr , low , high);
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}