/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let numCheck = {};
    for (let i = 0; i < nums.length; i++) {
        if (numCheck[nums[i]]) {
            numCheck[nums[i]] += 1
        } else {
            numCheck[nums[i]] = 1
        }
    }
    for (let key in numCheck) {
        if (numCheck[key] === 1) {
            return key
        }
    }
};