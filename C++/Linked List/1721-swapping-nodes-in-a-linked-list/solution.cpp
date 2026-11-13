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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*ri=head;//ri=rightpointer
        ListNode*le=head;//le=lepointer
        for(int i=0;i<k-1;i++){
            ri=ri->next;
        }
        ListNode*end=ri;
        while(ri->next){
            le=le->next;
            ri=ri->next;
        }
        swap(end->val,le->val);
        return head;
    }
};