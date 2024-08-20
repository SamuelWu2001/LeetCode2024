class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int ps = piles.size();
        vector<vector<int>> dp(ps, vector<int>(ps+1, 0));
        vector<int> suffixSum(ps, 0);

        suffixSum.back() = piles.back();
        for(int i=ps-2;i>=0;i--)
            suffixSum[i] = suffixSum[i+1] + piles[i];

        for(int i=ps-1;i>=0;i--) {
            for(int j=1;j<=ps;j++) {
                if (j*2 >= ps-i)
                    dp[i][j] = suffixSum[i];
                else {
                    for(int k=1;k<=2*j;k++) {
                        dp[i][j] = max(dp[i][j], suffixSum[i]-dp[i+k][min(ps, max(j, k))]);
                    }
                }
            }
        }
        return dp[0][1];
    }
};

// define the dp[i][m] means the maximum value when started at i index with M = m

