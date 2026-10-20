class Solution {
public:
    vector<int>ans;
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        if(left == right){
            int totalNode = 1 + 2 * left;
            ans.push_back(totalNode);
            return totalNode;
        }
        return -1;
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        solve(root);
        if(ans.size()<k) return -1;
        sort(ans.begin(),ans.end(),greater<int>());
        return ans[k-1];
    }
};