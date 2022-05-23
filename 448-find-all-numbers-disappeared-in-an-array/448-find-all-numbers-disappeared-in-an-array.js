/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    const numCheck = new Set(nums)
    let missing = []
    for(let i = 1; i <= nums.length; i++) {
        if (numCheck.has(i)) {
            continue
        } else {
            missing.push(i)
        }
    }

    return missing;
};