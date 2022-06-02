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
    ListNode* middleNode(ListNode* head) {
        int counter = 0;
        ListNode* pointer = head;
        while(pointer != nullptr) {
            counter += 1;
            pointer = pointer->next;
        }
        int middle = counter / 2;
        counter = 0;
        pointer = head;
        while(true) {
            if (counter == middle) {
                return pointer;
            }
            counter += 1;
            pointer = pointer->next;      
        }
        return pointer;
    }
};