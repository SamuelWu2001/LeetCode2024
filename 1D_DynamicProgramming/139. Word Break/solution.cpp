class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp;
        dp.push_back(true);
        
        for(int i=0;i<s.size();i++) {
            bool valid = false;
            for(int k=0;k<dp.size();k++) {
                if (dp[k]) {
                    string sub = s.substr(k, i-k+1);
                    for(auto word : wordDict) {
                        if (sub == word) valid = true;
                    }
                }
            }
            dp.push_back(valid);
        }
        
        return dp.back();
    }
};
