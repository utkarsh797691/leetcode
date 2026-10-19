class Solution {
public:
    vector<unsigned long long> firstIndex;
    unsigned long long maxWidth = 0;

    void dfs(TreeNode* root, int level, unsigned long long index) {
        if (root == NULL) return;

        if (level == firstIndex.size()) {
            firstIndex.push_back(index);
        }

        index -= firstIndex[level];

        maxWidth = max(maxWidth, index + 1);

        dfs(root->left, level + 1, 2 * index);
        dfs(root->right, level + 1, 2 * index + 1);
    }

    int widthOfBinaryTree(TreeNode* root) {
        firstIndex.clear();
        maxWidth = 0;

        dfs(root, 0, 0);

        return maxWidth;
    }
};