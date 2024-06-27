class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<long long> dp (1e4+1, 0);

        for(int i=0;i<nums.size();i++)
	        map[nums[i]]++;

        dp[1] = map[1]*1;
        dp[2] = map[2]*2;

        for(int i=3;i<=1e4;i++)
	        dp[i] = max(dp[i-2], dp[i-3]) + map[i]*i;
        
        return max(dp[1e4], dp[1e4-1]);

    }
};
