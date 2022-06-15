/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let result = [];
    let checkSum = {};
    for(let i = 0; i < nums.length; i++){
        let diff = target - nums[i];
        checkSum[diff] = i;
    }
    for(let j = 0; j < nums.length; j++){
        let prevNum = nums[checkSum[nums[j]]];
        if (prevNum + nums[j] == target && j != checkSum[nums[j]]){
            result.push(checkSum[nums[j]]);
            result.push(j);
            return result;
        }
    }
    return result;
};