/*
Painter's Partition Problem

You are given:
- An array 'boards[]' where boards[i] represents the length of the i-th board.
- 'k' painters.
- Each painter can paint only contiguous (continuous) boards.
- All painters work at the same speed.

Find the minimum time required to paint all the boards.

Example:
boards = [10, 20, 30, 40], k = 2

Possible partitions:
1) [10,20] | [30,40]  -> max = 70
2) [10,20,30] | [40]  -> max = 60  (Optimal)

Output: 60

Approach:
- Binary Search on Answer
- Search space:
    low  = max(boards)
    high = sum(boards)
- Check if all boards can be painted within 'mid' time using at most k painters.
- Return the minimum feasible time.
*/



#include <iostream>
#include<vector>
using namespace std;

bool IsValid(vector<int> arr , int n , int mid , int k ){
    int painter = 1 , board = 0; 
    for(int i = 0 ; i < n ; i++){
        if(board + arr[i] <= mid){
            board += arr[i];

        }
        else{
            painter++;
            board = arr[i];
        }
    }

    return painter <= k;
}

int painter_ans(vector<int> arr , int k , int n ){
    if(k > n ){
        return -1;
    }
    int sum = 0 , max = arr[0];
    int ans = -1 ;
    for (int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(arr[i] >  max ){
            max = arr[i];
        }
    }
    int st = max , end = sum ;
    int mid = st + (end - st)/2 ;
    while(st <= end){
        int mid = st + (end - st)/2 ;
        if(IsValid(arr , n , mid , k)){
            end = mid -1 ; 
            ans = mid ;
        }
        else{
            st = mid +1 ;
        }
    }
    return ans; 
}


int main(){
    vector<int> arr = {40 , 30 , 10 ,20 };
    int n = arr.size();
    int k ; 
    cout << "Pick k between 1 and " << n<< ": ";
    cin >> k;
    cout << painter_ans(arr , k , n ) << endl;
}
