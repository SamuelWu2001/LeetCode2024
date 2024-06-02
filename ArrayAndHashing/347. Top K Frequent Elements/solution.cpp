class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        int maxFreq = 0;
        unordered_map<int, vector<int>> freqMap;
        vector<int> result;

        for (auto it : nums) {
            map[it]+=1;
            maxFreq = max(maxFreq, map[it]);  
        }

        for (auto m : map)
            freqMap[m.second].push_back(m.first);
            
        while (result.size() < k) {
            for (auto num : freqMap[maxFreq])
                result.push_back(num);
            maxFreq--;
        }

        return result;
    }
};
