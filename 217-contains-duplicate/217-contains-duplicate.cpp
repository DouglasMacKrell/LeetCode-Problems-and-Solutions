class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = std::size(nums);
        map<int, int> numCheck;
        for (int i = 0; i < len; ++i)
        {
            if (numCheck.count(nums[i]))
            {
                return true;
            }
            else
            {
                numCheck[nums[i]] = 1;
            }
        }
        return false;
    }
};