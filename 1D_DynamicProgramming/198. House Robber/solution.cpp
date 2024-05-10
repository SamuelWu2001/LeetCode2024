class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];

        vector<int> dp;
        dp.push_back(nums[0]);
        dp.push_back(nums[1]);
        if (nums.size() >= 3) dp.push_back(nums[0]+nums[2]);

        for (int i=3;i<nums.size();i++) {
            cout << nums[i] << ',' << i << endl;
            dp.push_back(max(dp[i-3], dp[i-2]) + nums[i]);
        }
        return max(dp[dp.size()-1], dp[dp.size()-2]);
    }
};
