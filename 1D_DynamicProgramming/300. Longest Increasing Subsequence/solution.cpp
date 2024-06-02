class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        int maxLength = 0;
        for(int i=0;i<nums.size();i++) {
            int current = 1;
            for (int j=0;j<i;j++) {
                if (nums[j] < nums[i])
                   current = max(current, dp[j]+1);   
            }
            dp.push_back(current);
            maxLength = max(maxLength, current);
        }
        return maxLength;
    }
};
