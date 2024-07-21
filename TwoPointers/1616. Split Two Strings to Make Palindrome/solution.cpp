class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        return process(a,b) || process(b,a);
    }

    bool process(string a, string b) {
        int l = 0, r = a.size()-1;
        while(l<=r) {
            if (a[l] != b[r]) {
                return evalute(a.substr(l, (r-l+1))) || evalute(b.substr(l, (r-l+1)));
            }
            l++;
            r--;
        }
        return true;
    }

    bool evalute(string s) {
        int l = 0, r = s.size()-1;
        while(l<=r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
