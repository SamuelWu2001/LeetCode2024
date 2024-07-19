class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        vector<int> prefix(nums.size()+1, 0);
        unordered_map<int, int> map;
        long long res = 0;
        int count = 0;

        prefix[0] = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] % modulo == k)
                count ++;
            prefix[i+1] = count % modulo;
        }

        for (int i=0;i<prefix.size();i++) {
            // i-j == k or k-modulo
            // j == i-k or i-k+modulo
            int target = prefix[i] - k >= 0 ? prefix[i] - k : prefix[i] - k + modulo;
            res += map[target];
            map[prefix[i]]++;
        }
        
        return res;
    }
};
