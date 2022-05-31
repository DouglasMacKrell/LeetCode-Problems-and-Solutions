/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var num1 = 0;
    var num2 = 1;
    var sum;
    for (let i = 0; i < n; i++) 
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return num2;
};

