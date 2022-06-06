class Solution {
public:
    int search(vector<int>& nums, int target) {
        int middle = nums.size() / 2;
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            if (target == nums[middle]) {
                return middle;
            } else {
                if (nums[middle] < target) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
                middle = (left + right) / 2;
            }
        }
        return -1;
    }
};