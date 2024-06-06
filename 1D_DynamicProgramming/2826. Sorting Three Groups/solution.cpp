class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // find the longest non-decreasing subsequence
        unordered_map<int, int> map;
        
        for (auto num : nums) {
            int maxL = 0;
            for (int i=1;i<=num;i++)
                maxL = max(maxL, map[i]+1);
            map[num] = maxL;
        }
      
        int maxLength = (map[1]>=map[2])?(map[1]>=map[3]?map[1]:map[3]):(map[2]>=map[3]?map[2]:map[3]);
        return (int)nums.size() - maxLength;
    }
};
