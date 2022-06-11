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
var reverseList = function(head) {
    if (head == null) {
        return null;
    }
        
    if (head.next == null){
        return head;
    }
        
    let pNode = head;
    let pointer = head.next;
    while (pointer){
        let tempPrevNext = pointer;
        let tempPointerNext = pointer.next;
        if (pNode == head){
            pNode.next = null;
        }
        pointer.next = pNode;
        pNode = tempPrevNext;
        pointer = tempPointerNext;
    }
    return pNode;
};