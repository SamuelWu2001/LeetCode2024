class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int, vector<pair<int, int>>> map;
        vector<int> dp(n, INT_MAX);
        // store flights into hashmap
        for(auto flight : flights)
            map[flight[0]].emplace_back(flight[1], flight[2]);
        
        // BFS
        // queue store {cost, node, steps}
        queue<vector<int>> q;
        q.push({0,src,0});

        while(!q.empty()) {
            auto current = q.front();
            q.pop();
            int cost = current[0];
            int node = current[1];
            int steps = current[2];
            // address the situation that get to the target place
            if (node == dst) {
                continue;
            }
            // address k stops limitation
            if (steps == k+1) 
                continue;
            // address next step
            for(auto flight : map[node]) {
                int next = flight.first;
                int price = flight.second;
                int newCost = cost + price;
                if (newCost < dp[next]) {
                    dp[next] = newCost;
                    q.push({newCost, next, steps+1});
                } 
            }
        }

        return dp[dst]==INT_MAX?-1:dp[dst];
    }
};
