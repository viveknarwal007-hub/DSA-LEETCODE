class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        // Check first row
        for(int j = 0; j < n; j++) {
            if(matrix[0][j] == 0)
                firstRowZero = true;
        }

        // Check first column
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0)
                firstColZero = true;
        }

        // Mark rows and columns
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {

                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeroes using markers
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {

                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // First row
        if(firstRowZero) {
            for(int j = 0; j < n; j++)
                matrix[0][j] = 0;
        }

        // First column
        if(firstColZero) {
            for(int i = 0; i < m; i++)
                matrix[i][0] = 0;
        }
    }
};

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         Optimal Approach 

//         int m = matrix.size();
//         int n = matrix[0].size();

//         vector<int> rows(m, 0);
//         vector<int> cols(n, 0);

//         // Find all zeroes
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] == 0) {
//                     rows[i] = 1;
//                     cols[j] = 1;
//                 }
//             }
//         }

//         // Set corresponding rows and columns to zero
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (rows[i] || cols[j]) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };