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
 // [[3], [9, 20],[15,9]]
// current []
// a[]
// b[]
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {  // [3,9,20,null,null,15,7]
        vector<vector<int>> result;
        queue<TreeNode*> a, b;
        if (!root) return {};
        a.push(root); // 3
        int status = 0;
        vector<int> current = {};
        while(!a.empty() || !b.empty()) {  
            if (status == 0) {
                TreeNode* currentNode = a.front();    
                if (currentNode->left) b.push(currentNode->left);   
                if (currentNode->right) b.push(currentNode->right);
                current.push_back(currentNode->val);
                a.pop();
            } else {
                TreeNode* currentNode = b.front();
                if (currentNode->left) a.push(currentNode->left);
                if (currentNode->right) a.push(currentNode->right);
                current.push_back(currentNode->val);
                b.pop();
            }
            // decide status
            if (status == 1 && b.empty()) {
                status = 0;
                result.push_back(current);
                current = {};
            } else if (status == 0 && a.empty()) {
                status = 1;
                result.push_back(current);
                current = {};
            }
        }
        return result;
    }
};
