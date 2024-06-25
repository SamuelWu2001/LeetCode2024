class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result = {};
        if (digits.size()==0) return result;
        unordered_map<char, string> map;
        string current;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";

        explore(map, digits, 0, result, current);
        return result;    
    }

    void explore(unordered_map<char, string> &map, string digits, int index, vector<string> &result, string current) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        for(auto c : map[digits[index]]) {
            current += c;
            explore(map, digits, index+1, result, current);
            current.pop_back();
        }
        return;
    }

};
