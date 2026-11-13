class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* start = temp;

        while (start->next != NULL) {
            if (start->next->val == val) {
                ListNode* temp = start->next;
                start->next = temp->next;
                delete temp;
            } else {
                start = start->next;
            }
        }

        
        ListNode* newHead = temp->next;
        delete temp;
        return newHead;
    }
};
