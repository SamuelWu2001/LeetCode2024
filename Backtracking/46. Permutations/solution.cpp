class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<vector<int>> result;
        vector<int> temp;
        for (auto num : nums)
            map[num] += 1;
        explore(0, nums, map, temp, result);
        return result;
    }

    void explore(int index, vector<int>& nums, unordered_map<int,int>& map, vector<int>& temp, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(temp);
            return;
        }
        for (auto num : nums) {
            if (map[num]>0) {
                temp.push_back(num);
                map[num]--;
                explore(index+1, nums, map, temp, result);
                temp.pop_back();
                map[num]++;
            }
        }
    }
};
