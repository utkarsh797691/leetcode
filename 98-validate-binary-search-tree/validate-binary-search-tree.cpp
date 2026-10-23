class Solution {
public:
    long long LST(TreeNode* root){
        if(root == NULL) return LLONG_MIN;
        return max((long long)(root->val),max(LST(root->left),LST(root->right)));
    }
    long long RST(TreeNode* root){
        if(root == NULL) return LLONG_MAX;
        return min((long long)(root->val),min(RST(root->left),RST(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        else if(root->left == NULL && root->right == NULL) return true;
        if(root->val <= LST(root->left)) return false;
        else if(root->val >= RST(root->right)) return false;
        return (isValidBST(root->left) && isValidBST(root->right));        
    }
};