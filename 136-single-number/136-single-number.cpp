class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = std::size(nums);
        map<int, int> numCheck;
        for (int i = 0; i < len; ++i)
        {
            if (numCheck.count(nums[i]))
            {
                numCheck[nums[i]] += 1;
            }
            else
            {
                numCheck[nums[i]] = 1;
            }
        }
        for (const auto &myPair : numCheck)
        {
            if (numCheck[myPair.first] == 1)
            {
                return myPair.first;
            }
        }
        return 0;
    }
};