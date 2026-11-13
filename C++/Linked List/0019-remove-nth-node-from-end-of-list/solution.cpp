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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||n==0){
            return head;
        }
         if (head->next == NULL && n == 1) {
            return NULL;
        }
        
     ListNode*p=head;
     ListNode*x=head;
     ListNode*tail=head;
     int length=1;;
     while(tail->next){
            tail=tail->next;
            length++;
     }
      if (n == length) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
     for(int i=0;i<length-n;i++){
       p=p->next;
     }
     for(int i=0;i<length-n-1;i++){
       x=x->next;
     }
     x->next=p->next;
     p->next=NULL;
     return head;

    }
};