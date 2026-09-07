#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans ;
        int srow = 0 , erow = m-1;
        int scol = 0 , ecol = n-1;
        while(srow <= erow && scol <= ecol) {

            // top boundary
            for(int i = scol; i <= ecol; i++){
                ans.push_back(matrix[srow][i]);
            }
            srow++;

            // right boundary
            for(int i = srow; i <= erow; i++){
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // bottom boundary
            if(srow <= erow) {
                for(int i = ecol; i >= scol; i--){
                    ans.push_back(matrix[erow][i]);
                }
                erow--;
            }

            // left boundary
            if(scol <= ecol) {
                for(int i = erow; i >= srow; i--){
                    ans.push_back(matrix[i][scol]);
                    
                }
                scol++;
            }
        }
        return ans ;
    }
};

int main() {
    
    Solution obj;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    vector<int> ans = obj.spiralOrder(matrix);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}