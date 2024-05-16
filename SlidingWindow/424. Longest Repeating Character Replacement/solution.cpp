class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0; 
        int right = 1;
        char maxChar = s[0];
        int maxLength = 1;
        unordered_map<char, int> mp = {{maxChar, maxLength}};

        while(right < s.size()) {
            mp[s[right]] += 1;
            if (mp[s[right]] >  mp[maxChar]) maxChar = s[right];
            while ((right-left+1) > mp[maxChar] + k) {
                mp[s[left]] -= 1;
                if (s[left] == maxChar) {
                    for(auto it: mp)
                        if (it.second > mp[maxChar]) maxChar = it.first;
                }
                left++;
            }
            maxLength = max(maxLength, (right-left+1));
            right ++;
        }

        return maxLength;
    }
};
