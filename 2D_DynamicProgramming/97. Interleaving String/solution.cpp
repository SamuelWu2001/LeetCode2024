class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        unordered_set<int> a, b;
        if (s3.size() != s1.size()+s2.size())
            return false;

        a.insert(0);

        for (int i=1;i<=s3.size();i++) {
            if (a.empty() && b.empty())
                return false;
            else if (b.empty()) {
                for (auto it=a.begin();it!=a.end();) {
                    int c = *it;
                    if (s1[c] == s3[i-1]) 
                        b.insert(c+1);
                    if (s2[i-c-1] == s3[i-1])
                        b.insert(c);
                    it = a.erase(it);
                }
            } else {
                for (auto it=b.begin();it!=b.end();) {
                    int c = *it;
                    if (s1[c] == s3[i-1]) 
                        a.insert(c+1);
                    if (s2[i-c-1] == s3[i-1])
                        a.insert(c);
                    it = b.erase(it);
                }
            } 
        }


        if (a.empty() && b.empty())
            return false;

        return true;
    }
};
