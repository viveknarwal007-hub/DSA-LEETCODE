#include <iostream>
using namespace std;

int linearsearch(int arr[],int sz ,int target){
    for(int i = 0 ; i <sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {6,1,5,8,4,12,11,54,87,6};
    int target = 8;
    int sz = (sizeof(arr))/sizeof(arr[0]);
    cout << linearsearch(arr, sz,target)<<endl;
    return 0;
}