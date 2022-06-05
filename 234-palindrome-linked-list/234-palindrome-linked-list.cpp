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
    bool isPalindrome(ListNode* head) {
        int len = 0;
        ListNode* pointer = head;
        bool isOdd = false;
        while(pointer) {
            len += 1;
            pointer = pointer->next;
        }
        if (len <= 1) {
            return true;
        }
        if (len % 2 != 0) {
            isOdd = true;
        }
        deque<int> checkArr(len);
        int middle = floor(len / 2);
        int counter = 0;
        int checkIndex = 0;
        pointer = head;
        while(counter < len) {
            if (counter < middle) {
                checkArr.push_front(pointer->val);
            }
            if (isOdd) {
                if (counter > middle) {
                    if (checkArr[checkIndex] != pointer->val) {
                        return false;                
                    }
                    checkIndex += 1;
                }     
            } else {
                if (counter >= middle) {
                    if (checkArr[checkIndex] != pointer->val) {
                        return false;                
                    }
                    checkIndex += 1;
                }            
            }

            counter += 1;
            pointer = pointer->next;
        }
        return true;
    }
};