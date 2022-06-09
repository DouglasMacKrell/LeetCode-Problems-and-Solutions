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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* pointer = head->next;
        ListNode* pNode = head;
        while (pointer) { 
            if (pointer->val == pNode->val) {
                pNode->next = pointer->next;
                ListNode* temp = pointer->next;
                delete pointer;
                pointer = temp;
            } else {
                pNode = pointer;
                pointer = pointer->next;
            }
        }
        return head;
    }
};