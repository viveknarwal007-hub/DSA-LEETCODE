// using 2 pointer approach 
#include <iostream>
using namespace std;

void reverseArray(int arr[],int sz){
    int start = 0 ; int end =sz-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[]={2,6,3,4,8,2,7};
    int sz = 7;

    reverseArray(arr,sz);

    for(int i=0;i<sz;i++){

        cout << arr[i] << " ";
    }
    return 0;
}