class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = std::size(nums);
        std::set<int> numCheck(std::begin(nums), std::end(nums));
        for(int i = 0; i < len; ++i)
        {
            if (numCheck.count(i)) {
                continue;
            }
            else
            {
                return i;
            }
        }
        return len;
    }
};