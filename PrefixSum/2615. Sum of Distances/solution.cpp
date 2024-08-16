class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, pair<long long,  long long>> map;
        vector<long long> prefix(nums.size(), 0);
        vector<long long> suffix(nums.size(), 0);

        for(int i=0;i<nums.size();i++) {
            if (map.find(nums[i])!=map.end()){
                auto t = map.find(nums[i]);
                prefix[i] = i*(t->second.first) - t->second.second;
                t->second.first ++;
                t->second.second += i;
            } else {
                map[nums[i]] = {1, i};
            }
        }

        map.clear();

        for(int i=nums.size()-1;i>=0;i--) {
            if (map.find(nums[i])!=map.end()){
                auto t = map.find(nums[i]);
                suffix[i] = t->second.second - i*t->second.first;
                t->second.first ++;
                t->second.second += i;
            } else {
                map[nums[i]] = {1, i};
            }
        }

        for(int i=0;i<prefix.size();i++) {
            prefix[i] += suffix[i];
        }

        return prefix;
    }
};

// 1 3 1 1 2
// 0 0 2 4 0
// 5 0 1 0 0
// 5 0 3 4 0

// hashmap {1, (3,5)} {3, (1,1)} {2, (1,4)}
// hashmap {2, (1,4)} {1, (3,6)} {3, (1,1)}
