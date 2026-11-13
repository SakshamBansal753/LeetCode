class Solution {
    TreeNode *ans = NULL;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        helper(cloned,target);
        return ans;
    }
    void helper(TreeNode *cloned , TreeNode *target){
        if(!cloned){
            return ;
        }
        if(cloned->val == target->val){
            ans=cloned;
            return;
        }
        helper(cloned->left,target);
        helper(cloned->right,target);
    }
};