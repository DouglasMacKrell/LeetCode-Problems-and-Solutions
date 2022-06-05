/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function(n) {
    let answer = [];
    for(let i = 0; i <= n; i++) {
        answer.push(numOfBits(numToBinary(i)));
    }
    return answer;
};
    
function numToBinary(n) {
    return n.toString(2);
}

function numOfBits(str) {
    let counter = 0;
    for(let digit of str) {
        if (digit == 1) {
            counter += 1;
        }
    }
    return counter;
}