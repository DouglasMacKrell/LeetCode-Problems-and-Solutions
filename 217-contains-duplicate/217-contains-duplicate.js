/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let numCheck = {}
    for (let num of nums) {
        if (numCheck[num]) {
            return true
        } else {
            numCheck[num] = 1
        }
    }
    return false
};