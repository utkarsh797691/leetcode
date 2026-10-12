class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameter(TreeNode* root){
        if(root == NULL) return 0;
        int dia = height(root->left)+height(root->right);
        return max(dia,max(diameter(root->left),diameter(root->right)));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root);
    }
};