class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        vector<int> suffix(nums.size(), 0);
        vector<int> res(nums.size(), 0);
        prefix.front() = nums[0];
        suffix.back() = nums.back();

        for(int i=1;i<nums.size();i++)
            prefix[i] = prefix[i-1]*nums[i];
        for(int i=nums.size()-2;i>=0;i--)
            suffix[i] = suffix[i+1]*nums[i];

        for(int i=0;i<res.size();i++) {
            int l=1, r=1;
            if (i-1>=0) 
                l = prefix[i-1];
            if (i+1<suffix.size())
                r = suffix[i+1];
            res[i] = l*r;
        }

        return res;
    }
};

// prefix [1, 2, 6, 24]
// suffix [24, 24, 12, 4]
// index0 
// ans[0] = 1 * suffix[1] = 24
// ans[1] = prefix[0] * suffix[2] = 12
// ans[2] = prefix[1] * suffix[3] = 8
// ans[3] = prefix[2] * 1 = 6
