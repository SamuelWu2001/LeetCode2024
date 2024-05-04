class Solution {
public:
    bool isValid(string s) {
        stack<int> temp;
        unordered_map<char, char> map = {{'(',')'}, {'{','}'}, {'[',']'}};
        for (int i=0;i<s.size();i++) {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[') temp.push(s[i]);
            else {
                if (temp.empty()) return false;
                else if (map[temp.top()] == s[i]) temp.pop();
                else return false;
            }
        }
        if (temp.empty()) return true;
        else return false; 
    }
};
