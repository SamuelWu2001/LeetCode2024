class Solution {
public:
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>> res;
        vector<int> sortedArray;
        int left, right, mid, minV, maxV;

        dfs(root, sortedArray);
        for(auto query : queries) {
            left = 0;
            right = sortedArray.size();
            minV = -1;
            maxV = -1;
            while(left < right) {
                mid = left + (right-left)/2;
                if (sortedArray[mid] == query) {
                    minV = query;
                    maxV = query;
                    break;
                } else if (sortedArray[mid] < query) {
                    minV = sortedArray[mid];
                    left = mid + 1;
                } else {
                    maxV = sortedArray[mid];
                    right = mid;
                }
            }
            res.push_back({minV, maxV});
        }
        return res;
    }

    void dfs(TreeNode* node, vector<int>& sortedArray) {
        if (node) {
            dfs(node->left, sortedArray);
            sortedArray.push_back(node->val);
            dfs(node->right, sortedArray);
        }
    }
};
