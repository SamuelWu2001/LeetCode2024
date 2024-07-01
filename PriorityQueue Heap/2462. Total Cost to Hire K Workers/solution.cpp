class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>> pqL;
        priority_queue<int, vector<int>, greater<int>> pqR;
        long long result=0;
    
        int left = candidates-1, right = costs.size()-candidates;

        if (costs.size()>candidates*2) {
            for(int i=0;i<candidates;i++)
                pqL.push(costs[i]);
            for(int i=costs.size()-1;i>=costs.size()-candidates;i--)
                pqR.push(costs[i]);
        } else {
            for(auto cost : costs)
                pqL.push(cost);
        }
        
        while(k>0) {
            if(pqL.empty()) {
                result += pqR.top();
                pqR.pop();
            } else if(pqR.empty()) {
                result += pqL.top();
                pqL.pop();
            } else if(pqL.top()<=pqR.top()){
                result += pqL.top();
                pqL.pop();
                if (left+1<right){
                    ++left;
                    pqL.push(costs[left]);
                }
            } else {
                result += pqR.top();
                pqR.pop();
                if (left+1<right){
                    --right;
                    pqR.push(costs[right]);
                }
            }
            k--;
        }
        return result;
    }
};
