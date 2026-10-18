class Solution {
public:
    int left(TreeNode* root){
        int height = 0;
        while(root != NULL){
            height++;
            root = root->left;
        }
        return height;
    }
    int right(TreeNode* root){
        int height = 0;
        while(root != NULL){
            height++;
            root = root->right;
        }
        return height;
    }
    int Count(TreeNode* root){
        if(root == NULL) return 0;
        int hl = left(root);
        int hr = right(root);
        if(hl == hr) return pow(2,hl) - 1;
        return 1 + Count(root->left) + Count(root->right);
    }
    int countNodes(TreeNode* root) {
        int ans = Count(root);
        return ans;
    }
};