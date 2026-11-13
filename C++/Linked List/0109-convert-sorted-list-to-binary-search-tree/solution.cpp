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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* create(ListNode*head,ListNode*limit){
    if(head==limit){
        return NULL;
    }
    ListNode*slow=head;
    ListNode* slow_prev=slow;
    ListNode* fast=head;
    while(fast!=limit&&fast->next!=limit){
        slow=slow->next;
        fast=fast->next->next;
    }
    TreeNode*root=new TreeNode(slow->val);
    root->left=create(head,slow);
    root->right=create(slow->next,limit);
    return root;
}
    TreeNode* sortedListToBST(ListNode* head) {
        
       return create(head,NULL);
    }
};