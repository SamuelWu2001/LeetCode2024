class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmapList;
        vector<vector<string>> anagramList;
        
        for (int i=0;i<strs.size();i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            hashmapList[key].push_back(strs[i]);
        }

        for (auto it: hashmapList)
            anagramList.push_back(it.second);
        
        return anagramList;
    }
};
