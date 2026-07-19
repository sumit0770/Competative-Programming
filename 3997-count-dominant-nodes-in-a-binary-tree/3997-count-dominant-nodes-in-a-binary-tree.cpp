class Solution {
public:
    int count = 0;

    int dfs(TreeNode* root) {
        if (!root) return INT_MIN;

        int left = dfs(root->left);
        int right = dfs(root->right);

        int mx = max(left, right);

        if (root->val >= mx)
            count++;

        return max(root->val, mx);
    }

    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return count;
    }
};