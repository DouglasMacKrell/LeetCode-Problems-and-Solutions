/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
    let middle;
    if (arr.length % 2 != 0) {
        middle = Math.floor(arr.length / 2);
    } else {
        middle = (arr.length / 2);
    }
    console.log(arr.length, " ", middle)
    let left = 0;
    let right = arr.length - 1;
    while (left <= right) {
        if (arr[middle - 1] < arr[middle] && arr[middle] > arr[middle + 1]) {
            return middle;
        } else {
            if (arr[middle - 1] >= arr[middle] && arr[middle] >= arr[middle + 1]) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
            if ((right - left) % 2 != 0) {
                middle = Math.floor((left + right) / 2);
            } else {
                middle = (left + right) / 2;
            }
        }
    }
    return -1;
};