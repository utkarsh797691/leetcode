class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL){
            if(root->val == targetSum) return true;
            else return false;
        }
        int target = targetSum - root->val;
        bool leftsum = hasPathSum(root->left,target);
        bool rightsum = hasPathSum(root->right,target);
        return (leftsum || rightsum);
    }
};