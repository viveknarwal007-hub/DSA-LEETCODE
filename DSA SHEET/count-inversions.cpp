class Solution {
    int cnt = 0;
  public:
    void merge(vector<int>& arr, int low, int mid, int high) {
            // Create temp arrays
            vector<int> temp;
            int left = low, right = mid + 1;

            // Merge two sorted halves
            while (left <= mid && right <= high) {
                if (arr[left] <= arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }   
                //right is smaller
                else{
                    temp.push_back(arr[right]);
                    cnt += (mid-left+1);
                    right++;
                    
                }
            }

            // Copy remaining elements from left half
            while (left <= mid)
                temp.push_back(arr[left++]);

            // Copy remaining elements from right half
            while (right <= high)
                temp.push_back(arr[right++]);

            // Copy sorted elements back to original array
            for (int i = low; i <= high; i++)
                arr[i] = temp[i - low];
        }

        // Recursive merge sort function
    void mergeSort(vector<int>& arr, int low, int high) {
            if (low >= high)
                return;

            // Find the middle index
            int mid = (low + high) / 2;

            // Recursively sort left half
            mergeSort(arr, low, mid);

            // Recursively sort right half
            mergeSort(arr, mid + 1, high);

            // Merge the two sorted halves
            merge(arr, low, mid, high);
    }
    int inversionCount(vector<int> &arr) {
        // code here'
        int n = arr.size();
        mergeSort(arr, 0 , n-1 );
        return cnt;
    }
};