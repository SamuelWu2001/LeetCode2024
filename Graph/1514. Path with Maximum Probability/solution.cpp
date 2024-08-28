struct element {
    int node;
    double prob;
};

struct myCompare {
    bool operator()(const element& a, const element& b) {
        return a.prob < b.prob;
    }
};

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        priority_queue<element, vector<element>, myCompare> pq;
        vector<vector<pair<int, double>>> adj(n);
        vector<double> probList(n, 0);

        pq.push({start_node, 1});

        for(int i=0;i<edges.size();i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }

        while(!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            if(top.node == end_node)    break;
            for(auto e : adj[top.node]) {
                if (top.prob*e.second > probList[e.first]){
                    pq.push({e.first, top.prob*e.second});
                    probList[e.first] = top.prob*e.second;
                }
            }
        }

        return probList[end_node];
    }
};
