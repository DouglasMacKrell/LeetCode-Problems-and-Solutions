class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> checkSum;
        for(int i = 0; i < nums.size() - 1; ++i){
            int diff = target - nums[i];
            checkSum[diff] = i;
        }
        for(int j = 0; j < nums.size(); ++j){
            int prevNum = nums[checkSum[nums[j]]];
            if (checkSum.count(nums[j]) && prevNum + nums[j] == target && j != checkSum[nums[j]]){
                result.push_back(checkSum[nums[j]]);
                result.push_back(j);
                return result;
            }
        }
        return result;
    }

};