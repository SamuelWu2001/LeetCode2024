class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int group = 0;
        res.push_back(group);
        char prev = seq[0];
        char cur;

        for(int i=1;i<seq.size();i++) {
            cur = seq[i];
            if (cur == prev) 
                group = group==1?0:1;
            res.push_back(group);
            prev = cur;   
        }

        return res;
    }
};
