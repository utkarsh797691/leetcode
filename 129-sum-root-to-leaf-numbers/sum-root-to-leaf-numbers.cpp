class Solution {
public:
    int sum(TreeNode* root,int x){
        if(root == NULL) return 0;
        int currNum = x * 10 + root->val;
        if(root->left == NULL && root->right == NULL) return currNum;
        int leftSum = sum(root->left,currNum);
        int rightSum = sum(root->right, currNum);
        return leftSum+rightSum; 
    }
    
    int sumNumbers(TreeNode* root) {
        return sum(root , 0);
    }
};