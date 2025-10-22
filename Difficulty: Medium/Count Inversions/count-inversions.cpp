class Solution {
  public:
    // Merge two sorted halves and count inversions
    long long mergeAndCount(vector<long long> &arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<long long> L(n1), R(n2);
        for (int i = 0; i < n1; i++) L[i] = arr[left + i];
        for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        long long invCount = 0;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
                invCount += (n1 - i); // Remaining elements in L[] form inversions
            }
        }

        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];

        return invCount;
    }

    // Recursive merge sort with inversion counting
    long long mergeSortAndCount(vector<long long> &arr, int left, int right) {
        long long invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            invCount += mergeSortAndCount(arr, left, mid);
            invCount += mergeSortAndCount(arr, mid + 1, right);
            invCount += mergeAndCount(arr, left, mid, right);
        }
        return invCount;
    }

    // Function expected by GFG driver — accepts vector<int>
    long long inversionCount(vector<int> &arr) {
        // Convert to long long for safety in counting
        vector<long long> temp(arr.begin(), arr.end());
        return mergeSortAndCount(temp, 0, temp.size() - 1);
    }
};
