/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let sum = 0;
    let smax = -Infinity;
    for(let num of nums) {
        sum += num;
        smax = Math.max(smax, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return smax;
};