/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pointer = head;
        ListNode** pNode = &head;
        while(pointer != nullptr) {
            if(pointer->val == val) {
                ListNode* tempNode = pointer->next;
                removeNode(pointer, pNode);
                pointer = tempNode;
            } else {
                pNode = &pointer->next;
                pointer = pointer->next;                
            }
        }
        return head;
    }
    void removeNode(ListNode* node, ListNode** pNode) {
        *pNode = node->next;
        delete node;
    }
};

