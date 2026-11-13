class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp2 = head->next;
        
        ListNode* newhead = new ListNode(0);
        ListNode* dummy = newhead;

        while (temp2 != NULL) {
            int sum = 0;

            while (temp2 != NULL && temp2->val != 0) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            
            ListNode* newnode = new ListNode(sum);
            dummy->next = newnode;
            dummy = dummy->next;

            if (temp2 != NULL)
                temp2 = temp2->next;
        }

        return newhead->next;  
    }
};