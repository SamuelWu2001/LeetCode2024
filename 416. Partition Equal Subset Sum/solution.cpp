class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto num : nums)
            sum += num;
        if (sum%2!=0) return false;
        int target = sum/2;
        vector<vector<bool>> dp(nums.size()+1, vector<bool>(target+1, false));
        for(int i=0;i<=nums.size();i++)
            dp[i][0] = true;
        
        for(int i=1;i<=target;i++) {
            for(int j=1;j<=nums.size();j++) {
                if(nums[j-1] > i)
                    dp[j][i] = dp[j-1][i];
                else
                    dp[j][i] = dp[j-1][i] || dp[j-1][i-nums[j-1]];
            }
        }

        return dp[nums.size()][target];
    }
};

// sum/2
// unordered_map {num, time} 
// dp[i][j] means that considered taking first j elements whether nums i can be represent?
// [1,5,11,5]  11
//   0 1 2 3 4 5 6 7 8 9 10 11
// 0 t f f f f f f f f f  f  f 
// 1 t t f f f f 
// 2 t t f f f t
// 3 t t f f f t
// 4 t t f f f t
