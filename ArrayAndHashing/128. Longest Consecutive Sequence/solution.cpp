class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        unordered_map<int, bool> map;
        for(auto num: nums)
            map[num] = true;
        int minV, maxV, result=0; 
        while(map.size() > 0) {
            int len = 0;
            minV = map.begin()->first;
            maxV = minV+1;
            while(map.find(minV)!=map.end() || map.find(maxV)!=map.end()) {
                len++;
                if (map.find(minV)!=map.end()) {
                    map.erase(minV);
                    minV--;
                } else {
                    map.erase(maxV);
                    maxV++;
                }
            }
            result = max(result, len);
        }
        return result;
    }
};
