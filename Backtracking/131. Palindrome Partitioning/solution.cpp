class Solution { 
public:
	vector<vector<string>> partition(string s) {
		vector<vector<string>> result;
		vector<string> validPartitions;
		unordered_map<string, bool> map;
		explore(0, s, result, validPartitions, map);
        return result;
    }
    void explore(int index, string &s, vector<vector<string>>& result, vector<string>& validPartitions, unordered_map<string, bool>& map) {
    	if (index == s.size()) {    // 3 3
        	result.push_back(validPartitions);   // result = {[“a”, “a”, “b”]}
        	return;
        }
    	string currentSubstring;
    	for (int i=index;i<s.size();i++) {
    		currentSubstring += s[i];                             // currentSubstring = “aa”
            if (map[currentSubstring] || eval(currentSubstring)) {
    			map[currentSubstring] = true;
    			validPartitions.push_back(currentSubstring);                  // validPartitions[“aa”]
    			explore(index+currentSubstring.size(), s, result, validPartitions, map);
    			validPartitions.pop_back();
            }
        }	
        return;
    }


    bool eval(string temp) {
        int left = 0, right = temp.size()-1;
        while(left < right) {
        	if (temp[left] != temp[right]) return false;
        	left++; right--;
        }
        return true;
    }     
};

