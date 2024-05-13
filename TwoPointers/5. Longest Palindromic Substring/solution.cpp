class Solution {
public:
    string longestPalindrome(string s) {
        int maxLeft = 0;
        int maxRight = 0;
        for (int i=0; i<s.size();i++) {
            visit(s, i, maxLeft, maxRight);
        }
        return s.substr(maxLeft, (maxRight - maxLeft+1));
    }

    void visit(string &s, int i, int &maxLeft, int &maxRight) {
        int left = i;
        int right = i;
        findLongestPalindrome(s, left, right, maxLeft, maxRight);
        if (i<s.size()-1 && s[i] == s[i+1]) {
            left = i; right = i+1;
            findLongestPalindrome(s, left, right, maxLeft, maxRight);
        }
    }

    void findLongestPalindrome(string &s, int left, int right, int &maxLeft, int &maxRight) {
        while (left>=0 && right<s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        left++; right--;
        if ((maxRight-maxLeft) < (right-left)) {
            maxRight = right;
            maxLeft = left;
        }
    }
     
};
