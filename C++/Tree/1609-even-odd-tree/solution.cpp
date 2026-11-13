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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int l=0;
        while(q.size()){
            int s=q.size();
            int prev=l%2==0?INT_MIN:INT_MAX;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
               
                if (l % 2 == 0) {
                    
                    if (curr->val % 2 == 0 || curr->val <= prev)
                        return false;
                } 
                else if(l%2!=0) {
                    
                    if (curr->val % 2 != 0 || curr->val >= prev)
                        return false;
                }
                prev=curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            l++;

        }
        return true;
    }
};