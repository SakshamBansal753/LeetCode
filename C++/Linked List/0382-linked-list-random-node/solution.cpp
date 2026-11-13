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
ListNode*mainhead;
    Solution(ListNode* head) {
        mainhead=head;

    }
    
    int getRandom() {
        ListNode*x=mainhead;
        int count=0;
        int res=0;
        while(x){
            count++;
            if(rand()%count==0){
                
                res=x->val;
            }
            x=x->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */