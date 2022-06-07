class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int middle;
        if (arr.size() % 2 != 0) {
            middle = (arr.size() / 2) + 1;
        } else {
            middle = (arr.size() / 2);
        }
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            if (arr[middle - 1] < arr[middle] && arr[middle] > arr[middle + 1]) {
                return middle;
            } else {
                if (arr[middle - 1] >= arr[middle] && arr[middle] >= arr[middle + 1]) {
                    right = middle - 1;
                } else {
                    left = middle + 1;
                }
                if ((right - left) % 2 != 0) {
                    middle = ((left + right) / 2) + 1;
                } else {
                    middle = (left + right) / 2;
                }
            }
        }
        return -1;
    }
};