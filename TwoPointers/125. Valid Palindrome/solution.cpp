class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.size()-1;
        int left = 0;
        while (left <= right) {
            // check alphanumeric
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            // change uppercase to lowercase
            if (s[left] >= 65 && s[left] <= 90) s[left] += 32;
            if (s[right] >= 65 && s[right] <= 90) s[right] += 32;

            if (s[left] != s[right]) return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
