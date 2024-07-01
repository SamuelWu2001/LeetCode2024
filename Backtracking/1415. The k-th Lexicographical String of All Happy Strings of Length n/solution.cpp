class Solution {
public:
    string getHappyString(int n, int k) {
    	string s = "abc";
    	string current="";
        string result;
    	int count = 0;
    	helper(n, k, s, current, ' ', count, result);
        return result; 
    }

    void helper(int n, int k, string& s, string& current, char currentC, int& count, string& result) {
    	if (current.size() == n) {
    	    ++count;
            if (count == k) {
        	    result = current;
            }
            return;
        }
    	for(auto c : s) {
    		if (c != currentC) {
    	        current += c;
    	        helper(n, k, s, current, c, count, result);
    	        current.pop_back();
            }
        }
        return;
    }
};
