class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        queue<int> level;
        vector<vector<int>> adjNodes(n);
        vector<int> adjCount(n, 0);
        vector<bool> visit(n, false);
        vector<int> res;
        if(n == 1)
            return {0};

        for(auto edge : edges) {
            adjNodes[edge[0]].push_back(edge[1]);
            adjCount[edge[0]]++;
            adjNodes[edge[1]].push_back(edge[0]);
            adjCount[edge[1]]++;
        }
        for(int i=0;i<n;i++) {
            if (adjCount[i] == 1 && !visit[i]) {
                level.push(i);
                visit[i] = true;
            }
        }
        while(!level.empty()) {
            int l = level.size();
            n -= l;
            if (n == 0)
                break;
            for(int i=0;i<l;i++) {
                auto node = level.front();
                level.pop();
                for(auto c : adjNodes[node]) {
                    if (!visit[c]) {
                        adjCount[c]--;
                        if (adjCount[c] == 1) {
                            level.push(c);
                            visit[c] = true;
                        }
                    }
                }
            }
        }
        while(!level.empty()){
            res.push_back(level.front());
            level.pop();
        }
        return res;
    }
};
