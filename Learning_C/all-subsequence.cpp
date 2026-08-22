#include <bits/stdc++.h>
using namespace std;

void subsequences(vector<int>& arr, int i, vector<int>& curr) {
    if (i == arr.size()) {
        for (int x : curr)
            cout << x << " ";
        cout << endl;
        return;
    }

    // Don't take
    subsequences(arr, i + 1, curr);

    // Take
    curr.push_back(arr[i]);
    subsequences(arr, i + 1, curr);

    // Backtrack
    curr.pop_back();
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> curr;

    subsequences(arr, 0, curr);
}