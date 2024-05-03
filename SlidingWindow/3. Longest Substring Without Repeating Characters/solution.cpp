class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> map;
        int start = 0; int end = 0; int max_length = 1;
        if (s.size()==0) return 0;
        map.insert(s[0]);

        while (end < s.size()-1) {
            ++end;
            while (map.find(s[end])!=map.end()) {
                map.erase(s[start]);
                start++;
            }
            map.insert(s[end]);
            max_length = max(max_length, int(map.size()));
        } 
        return max_length;
    }
};
