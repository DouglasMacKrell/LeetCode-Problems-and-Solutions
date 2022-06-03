/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    let xCheck = new Array(matrix.length).fill(0);
    let yCheck = new Array(matrix[0].length).fill(0);
    for(let i = 0; i < matrix.length; i++){
        for(let j = 0; j < matrix[0].length; j++){
            if (matrix[i][j] == 0) {
                xCheck[i] = 1;
                yCheck[j] = 1;
            }
        }
    }
    for(let i = 0; i < matrix.length; ++i){
        for(let j = 0; j < matrix[0].length; ++j){
            if (xCheck[i] == 1) {
                matrix[i][j] = 0;
            }
            if (yCheck[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
};