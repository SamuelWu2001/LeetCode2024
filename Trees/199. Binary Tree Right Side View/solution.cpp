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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level = 1;
        explore(root, level, ans);
        return ans;
    }

    void explore(TreeNode* node, int level, vector<int>& ans) {
        if (node) {
            if (level > ans.size())
                ans.push_back(node->val);
            explore(node->right, level+1, ans);
            explore(node->left, level+1, ans);
        }
    }
};
