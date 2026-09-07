#include <iostream>
#include <vector>
using namespace std;

bool IsValid(const vector<int>& arr, int n, int m, int mid) {
    int student = 1;
    int number = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > mid) {
            return false;
        }

        if (number + arr[i] <= mid) {
            number += arr[i];
        }
        else {
            student++;
            number = arr[i];
        }
    }

    return student <= m;
}

int SplitArray(const vector<int>& arr, int n, int m) {

    if (m > n) {
        return -1;
    }

    int sum = 0;
    int ans = -1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int st = 0, end = sum;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (IsValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> que = {2, 1, 3, 4};

    int n = que.size();
    int m = 2;

    cout << SplitArray(que, n, m) << endl;

    return 0;
}