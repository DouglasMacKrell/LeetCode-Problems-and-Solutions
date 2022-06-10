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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) 
        {
            return nullptr;
        }
        
        if (head->next == nullptr)
        {
            return head;
        }
        
        ListNode* pNode = head;
        ListNode* pointer = head->next;
        while (pointer)
        {
            ListNode* tempPrevNext = pointer;
            ListNode* tempPointerNext = pointer->next;
            if (pNode == head)
            {
                pNode->next = nullptr;
            }
            pointer->next = pNode;
            pNode = tempPrevNext;
            pointer = tempPointerNext;
        }
        return pNode;
    }
};