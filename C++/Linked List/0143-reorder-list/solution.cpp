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
    void reorderList(ListNode* head) {
       ListNode*slow=head;
       ListNode*fast=head;
       while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode*reverse=slow->next;
       slow->next=NULL;
       ListNode*prev=NULL;
       while(reverse){
    ListNode* curr = reverse;
    ListNode* next = reverse->next; 

    curr->next = prev;

    prev = curr;
    reverse = next;
}
ListNode*second=prev;
ListNode*f=head;
       while(second){
            ListNode* tmp1 = f->next;
            ListNode* tmp2 = second->next;

            f->next = second;
            second->next = tmp1;

            f = tmp1;
            second = tmp2;
        }

    }
};