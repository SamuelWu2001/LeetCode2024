class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp = {};
        explore(0, nums, res, temp);

        return res;
    }


    void explore(int index, vector<int>& nums, vector<vector<int>>& res, vector<int>& temp) {
        if (index == nums.size()) {
            res.push_back(temp);
            return;
        }
        // take
        temp.push_back(nums[index]);
        explore(index+1, nums, res, temp);
        // not take
        temp.pop_back();
        explore(index+1, nums, res, temp);
    }
};
