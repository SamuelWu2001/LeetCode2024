class Solution {
public:
    int findTheLongestSubstring(string s) {
        int status = 0;
        unordered_map<int, int> map;
        map[0] = -1;
        int length = 0;
        for(int i=0;i<s.size();++i) {
            // update status
            if (s[i] == 'a') {
                status ^= 1 << 4; 
            } else if (s[i] == 'e') {
                status ^= 1 << 3; 
            } else if (s[i] == 'i') {
                status ^= 1 << 2; 
            } else if (s[i] == 'o') {
                status ^= 1 << 1; 
            } else if (s[i] == 'u'){
                status ^= 1; 
            }
            // update length
            if (map.find(status) != map.end()) {
                length = max(length, (i-map[status]));
            } else {
                map[status] = i;
            }
            
        }

        return length;
    }
};

// 1. Are all the characters the lowercae letter?
// status 11000
//    e   01000
// ''    l       e      e       t      c      o       d    e       i      s   
// 00000 00000, 01000, 00000, 00000, 00000, 00010, 00010, 01010, 01110, 01110 

// record
// {00000, -1} {01000, 1} {00010, 5}, {01010, 7}, {01110, 8}}
// length
// 5
