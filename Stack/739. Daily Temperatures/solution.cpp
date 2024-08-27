class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> s;

        for(int i=0;i<temperatures.size();i++) {
            while (!s.empty() && temperatures[i] > s.top().first) {
                auto p = s.top();
                ans[p.second] = i-(p.second);
                s.pop();
            }
            s.push({temperatures[i], i});
        }

        return ans;
    }
};

// stack 
// [73,74,75,71,69,72,76,73]
// [76, 73]
// [1, 1, 4, 2, 1, 1, 0, 0]
// 1 2 x y z
