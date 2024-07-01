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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q1;
        queue<pair<TreeNode*, int>> q2;
        q1.push({root, 0});
        int status = 0;
        int result = 0;
        bool start = false;
        int l = 0, r = 0;

        while(!q1.empty() || !q2.empty()) {
            if (q1.empty() && status==0) {
                result = max(result, (r+1));
                l = 0, r = 0;
                status = 1;
                start = false;
            }
            if (q2.empty() && status==1) {
                result = max(result, (r+1));
                l = 0, r = 0;
                status = 0;
                start = false;
            }
            if (status == 0) {
                TreeNode* node = q1.front().first;
                int index = q1.front().second;
                if (node) {
                    if (!start) {
                        start = true;
                        l = index;
                    }
                    r = index-l;
                    if (node->left)
                        q2.push({node->left, (long long)2*r});
                    if (node->right)
                        q2.push({node->right, (long long)2*r+1});
                }
                q1.pop();
            } else {
                TreeNode* node = q2.front().first;
                int index = q2.front().second;
                if (node) {
                    if (!start) {
                        start = true;
                        l = index;
                    }
                    r = index-l;
                    if (node->left)
                        q1.push({node->left, (long long)2*r});
                    if (node->right)
                        q1.push({node->right, (long long)2*r+1});
                }
                q2.pop();
            }

        }
        result = max(result, (r+1));
        return (int)result;
    }
};
