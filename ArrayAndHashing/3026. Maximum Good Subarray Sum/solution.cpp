class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = LLONG_MIN;
        unordered_map<int, pair<int,int>> map;
        vector<long long> prefix(nums.size(), 0);

        prefix[0] = nums[0];

        for(int i=1;i<nums.size();i++)
            prefix[i] = prefix[i-1] + nums[i];

        for (int i=0;i<nums.size();i++) {

            vector<long long> target = {nums[i]+k, nums[i]-k};
            for (auto t : target) {
                if(map.find(t) != map.end()) {
                    long long curSum = prefix[i]-(map[t].first>0?prefix[map[t].first-1]:0);
                    maxSum = max(maxSum, curSum);
                }
            }
            
            if(map.find(nums[i]) != map.end()) {
                if (prefix[i] < map[nums[i]].second) {
                    map[nums[i]].second = prefix[i];
                    map[nums[i]].first = i;
                }
            } else {
                map[nums[i]].second = prefix[i];
                map[nums[i]].first = i;
            }
        }
        return maxSum==LLONG_MIN?0:maxSum;
    }
};
