class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> fmapt, fmaps;
        int l=-1, r=-1, length=INT_MAX;
        int targetL;
        
        for(auto c : t) 
            fmapt[c]++;
        
        while(r<(int)s.size()-1) {
            ++r;
            ++fmaps[s[r]];
            while(check(fmapt, fmaps)) {
                // update length
                if((r-l)<length) {
                    targetL = l;
                    length = (r-l);
                }
                //
                ++l;
                --fmaps[s[l]];
            }
        }
        if (length == INT_MAX)
            return "";
        return s.substr(targetL+1, length);
    }

    bool check(unordered_map<char, int>& fmapt, unordered_map<char, int>& fmaps) {
        for(const auto& pair : fmapt) {
            if(fmaps[pair.first] < pair.second)
                return false;
        }
        return true;
    }
};

// ADOBECODEBANC
//         l   r
// {'a', 2}
