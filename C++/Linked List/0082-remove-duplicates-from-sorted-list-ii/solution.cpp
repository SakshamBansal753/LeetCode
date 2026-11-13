class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* x = head;

        while(x){

            if(x->next && x->val == x->next->val){

                while(x->next && x->val == x->next->val){
                    x = x->next;
                }

                prev->next = x->next;
            }
            else{
                prev = prev->next;
            }

            x = x->next;
        }

        return dummy->next;
    }
};