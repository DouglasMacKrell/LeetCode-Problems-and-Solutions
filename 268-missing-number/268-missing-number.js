/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let numCheck = new Set(nums)
    for (let i = 0; i < nums.length; i++) {
        if (numCheck.has(i)) {
            continue
        } else {
            return i
        }
    }
    return nums.length
};