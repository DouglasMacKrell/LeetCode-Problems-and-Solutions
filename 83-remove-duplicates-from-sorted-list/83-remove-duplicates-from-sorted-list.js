/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    if (head == null) {
        return null;
    }
    let pointer = head.next;
    let pNode = head;
    while (pointer) { 
        if (pointer.val == pNode.val) {
            pNode.next = pointer.next;
            let temp = pointer.next;
            delete pointer;
            pointer = temp;
        } else {
            pNode = pointer;
            pointer = pointer.next;
        }
    }
    return head;
};