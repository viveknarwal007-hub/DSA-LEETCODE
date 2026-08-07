#include <iostream>
#include<vector>
using namespace std;

int main() {
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector<vector<int>> mat = { {1,2,3}, {4,5,6} };

    cout << mat.size() << endl;  // row size 
    cout << mat[0].size() << endl;  // column size 

    // in vector matrix a row can have more columns than others like this 
    // 1 1 1 
    // 1 1 1 1 1
    // 1 1 1 

    int rows = 4 ;
    int cols = 3 ;

    // cout << matrix[2][1] << endl;
    // for(int i = 0 ; i  < rows ; i++) {
    //     for(int j = 0 ; j < cols ; j++){
    //         cout << matrix[i][j] << " " ;
    //     }
    //     cout << endl;
    // }

    return 0;
}