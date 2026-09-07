#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrixII(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int r= 0 ;
        int c = n - 1 ;
        while(c >= 0 && r < m ){
            if(target  == matrix[r][c]){
                return true ;
            }
            else if(target > matrix[r][c]){
                r++;
            }
            else if(target < matrix[r][c]){
                c--;
            }
        }
        return false;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> matrix = {{1,4,7,11,15},
                                  {2,5,8,12,19},
                                  {3,6,9,16,22},
                                  {10,13,14,17,24},
                                  {18,21,23,26,30}};

//     Integers in each row are sorted in ascending from left to right.
//     Integers in each column are sorted in ascending from top to bottom.

// so we knwo the lowest element is mat[0][0] and highhest element is mat[m-1][n-1]
    int target = 5;

    bool ans = obj.searchMatrixII(matrix, target);

    if (ans)
        cout << "Target Found";
    else
        cout << "Target Not Found";

    return 0;
}