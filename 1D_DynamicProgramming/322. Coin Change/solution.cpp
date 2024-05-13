class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp{0};

        for (int i=1;i<=amount;i++) {
            int fewestNum = 100000;
            for (auto coin : coins) {
                if (coin <=i && dp[i-coin] >= 0) {
                    fewestNum = min(fewestNum, dp[i-coin]);
                }
            }
            if (fewestNum < 100000) dp.push_back(fewestNum+1);
            else dp.push_back(-1);
        }

        return dp.back();
    }
};
