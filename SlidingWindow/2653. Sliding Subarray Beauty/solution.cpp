class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int, int> map;
        int left = -1, right = k-2; 
        vector<int> res;
        for (int i=0;i<k-1;i++) {
            if (nums[i] < 0)
                map[nums[i]] += 1;
        }
        
        while(right < (int)nums.size()-1) {
            if (left >= 0 && nums[left] < 0) {
                map[nums[left]] -= 1;
                if (map[nums[left]] == 0)
                    map.erase(nums[left]);
            } 
            if (nums[right+1] < 0)
                map[nums[right+1]] += 1;
            // find beauty
            int count = 0;
            int cur = 0;
            for (const auto &pair : map) {
                count += pair.second;
                if (count >= x) {
                    cur = pair.first;
                    break;
                }
            }
            res.push_back(cur);
            left++;
            right++;
        }
        return res;
    }
};
