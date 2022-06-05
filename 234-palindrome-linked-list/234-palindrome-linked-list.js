/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    let len = 0;
    let checkArr = [];
    let pointer = head;
    let isOdd = false;
    while(pointer) {
        len += 1;
        pointer = pointer.next;
    }
    if (len <= 1) {
        return true;
    }
    if (len % 2 != 0) {
        isOdd = true;
    }
    let middle = Math.floor(len / 2);
    let counter = 0;
    let checkIndex = 0;
    pointer = head;
    while(counter < len) {
        if (counter < middle) {
            checkArr.unshift(pointer.val);
        }
        if (isOdd) {
            if (counter > middle) {
                if (checkArr[checkIndex] != pointer.val) {
                    console.log(checkArr, checkArr[checkIndex], pointer.val)
                    return false;                
                }
                checkIndex += 1;
            }     
        } else {
            if (counter >= middle) {
                if (checkArr[checkIndex] != pointer.val) {
                    console.log(checkArr, checkArr[checkIndex], pointer.val)
                    return false;                
                }
                checkIndex += 1;
            }            
        }

        counter += 1;
        pointer = pointer.next;
    }
    return true;
};