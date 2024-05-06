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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode *current, *temp;
        if (!root) return root;
        q.push(root);

        while (q.size()) {
            current = q.front();
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
            temp = current->left;
            current->left = current->right;
            current->right = temp;
            q.pop();
        }

        return root;
    }
};
