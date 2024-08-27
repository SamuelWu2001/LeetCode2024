class Solution {
public:
    int maxProduct(vector<int>& nums) {
        pair<int, int> record = {0,0};
        int ans = 0;
        if (nums.size() == 1 && nums[0]<0)
            return nums[0];

        for(auto num : nums) {
            if (num>0) {
                if (record.first == 0)
                    record.first = num;
                else
                    record.first *= num;
                record.second *= num;
            } else if (num < 0) {
                int temp = record.second;
                if (record.first == 0)
                    record.second = num;
                else
                    record.second = record.first * num;
                record.first = temp * num;
            } else 
                record = {0,0};
            ans = max(ans, record.first);
        }

        return ans;
    }
};

// dp
// [2,3,-2,4]
// [6,-12]
