class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = std::size(nums);
        std::set<int> numCheck(std::begin(nums), std::end(nums));
        vector<int> missing;
        for (int i = 1; i <= len; ++i)
        {
            if (numCheck.count(i))
            {
                continue;
            }
            else
            {
                missing.insert(missing.end(), i);
            }
        }
        return missing;
    }
};