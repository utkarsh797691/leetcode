class Solution {
public:
    void helper(TreeNode* root1,TreeNode* root2, int level){
        if(root1==NULL || root2 == NULL) return;
        if(level % 2 != 0){
            swap(root1->val,root2->val);
        }
        helper(root1->left,root2->right,level+1);
        helper(root1->right,root2->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        helper(root->left,root->right,1);
        return root;
    }
};