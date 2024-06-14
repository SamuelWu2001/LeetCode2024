class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        for (int i=0;i<s.size();i++) {
            bool valid = true;
            int left = i, right = i;
            while(left >= 0 && right <s.size() && valid) {
                if (s[left] == s[right]) {
                    valid = true;
                    res++;
                } else {
                    valid = false;
                }
                left--;
                right++;
            }
            if (i>0 && s[i]==s[i-1]) {
                left = i-1;
                right = i;
                valid = true;
                while(left >= 0 && right <s.size() && valid) {
                    if (s[left] == s[right]) {
                        valid = true;
                        res++;
                    } else {
                        valid = false;
                    }
                    left--;
                    right++;
                }
            }
        }
        return res;
    }
};
