#include <iostream>
#include <vector>
using namespace std;

// brute force easy = linear search directly = O(m * n )

// more optimal approach = binary search type

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0;
        int high = rows * cols - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / cols;
            int col = mid % cols;

            if (matrix[row][col] == target)
                return true;

            if (matrix[row][col] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 16;

    bool ans = obj.searchMatrix(matrix, target);

    if (ans)
        cout << "Target Found";
    else
        cout << "Target Not Found";

    return 0;
}