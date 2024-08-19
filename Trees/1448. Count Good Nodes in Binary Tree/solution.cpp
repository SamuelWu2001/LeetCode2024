/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count = 0, currMax = INT_MIN;     
        dfs(root, count, currMax);
        return count;
    }

    void dfs (TreeNode* node, int& count, int currMax) {
        if (node->val >= currMax) {
            ++count;
            currMax = node->val;
        }
        if (node->left) {
            dfs(node->left, count, currMax);
        }
        if (node->right) {
            dfs(node->right, count, currMax);
        }
    }
};
