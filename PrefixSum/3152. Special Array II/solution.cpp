class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> record(nums.size(),0);
        vector<bool> ans;
        int counter = 0;
        for (int i =1;i<nums.size();i++) {
            if (!((nums[i]%2)^(nums[i-1]%2))) {
                ++counter;
            }
            record[i] = counter;
        }

        for(auto q : queries) {
            if(record[q[1]] - record[q[0]] == 0) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};

// fromi == toi ?
// record [0, 0, 1, 1]
// 1
// false, true
