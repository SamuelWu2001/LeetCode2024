class Solution {
public:
    // binary search method => O(nlog(n)) in Time
    // 
    int lengthOfLIS(vector<int>& nums) {
        vector<int> sorted;
        int maxLength = 0;
        for(int i=0;i<nums.size();i++) {
            int pos = lower_bound(sorted.begin(),sorted.end(), nums[i]) - sorted.begin();
            if (pos == sorted.size())
                sorted.push_back(nums[i]);
            else 
                sorted[pos] = nums[i];
            maxLength = max(maxLength, pos+1);        
        }
        return maxLength;
    }

    // dynamic programming => O(n^2) in Time
    //
    // int lengthOfLIS(vector<int>& nums) {
    //     vector<int> dp;
    //     int maxLength = 0;
    //     for(int i=0;i<nums.size();i++) {
    //         int current = 1;
    //         for (int j=0;j<i;j++) {
    //             if (nums[j] < nums[i])
    //                current = max(current, dp[j]+1);   
    //         }
    //         dp.push_back(current);
    //         maxLength = max(maxLength, current);
    //     }
    //     return maxLength;
    // }
};


