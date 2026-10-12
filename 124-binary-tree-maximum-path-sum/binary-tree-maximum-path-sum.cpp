class Solution {
public:
    int maxSum = INT_MIN;
    int maxPath(TreeNode* root){
        if(root == NULL) return 0;
        int leftSum = max(0,maxPath(root->left));
        int rightSum = max(0,maxPath(root->right));
        int currSum = root->val+leftSum+rightSum;
        maxSum = max(maxSum,currSum);
        return root->val+max(leftSum,rightSum);
    }
    int maxPathSum(TreeNode* root) {
       maxPath(root);
       return maxSum;
    }
};