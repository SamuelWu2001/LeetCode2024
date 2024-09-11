class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (auto num : nums)
            sum += abs(num);
        target = abs(target);
        if (target > sum) return 0;
        vector<vector<int>> dp(nums.size()+1, vector<int>(2*sum+1, 0));
        dp[0][sum] = 1;

        for(int i=1;i<=nums.size();i++) {
            for(int j=0;j<2*sum+1;j++) {
                if (j-nums[i-1] >= 0)
                    dp[i][j] += dp[i-1][j-nums[i-1]];
                if (j+nums[i-1] < 2*sum+1)
                    dp[i][j] += dp[i-1][j+nums[i-1]];
            }
        }

        return dp[nums.size()][sum+target];
    }
};


// dp[i][j] represents the number of qualifired conbinations when considering taking pre ith elements withe the sum of j

// dp[i+1][j] = dp[i][j-nums[i]] + dp[i][j+nums[i]]


// 0 0 0 1 0 0 0
// 0 0 1 0 1 0 0
// 0 1 0 2 0 1 0
// 1 0 3 0 3 0 1
// 0 4 0 6 0 4 0
// 5 0 100 100 5
