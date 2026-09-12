#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<vector<int>> mat = {{4,7} , {1,4}};
    int n = mat.size();
    sort(mat.begin(), mat.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }

    return 0;
}