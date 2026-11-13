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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*tail=head;
        ListNode*p=head;
        if (!head || !head->next || k == 0) {
            return head;  
        }int length = 1;
 
        while(tail->next){
            tail=tail->next;
            
            length++;
        }
        tail->next = head;
         k = k % length;
        if (k == 0) {
            tail->next = nullptr;  
            return head;
        }
         for (int i = 1; i < length - k; i++) {
            p = p->next;
        }
       ListNode* newHead = p->next;
        p->next = nullptr;

        return newHead;
        
    }
};