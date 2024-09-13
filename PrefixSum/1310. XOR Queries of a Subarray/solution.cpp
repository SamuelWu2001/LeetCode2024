class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefix(arr.size()+1, 0);
        vector<int> res;
        int cur = 0;

        for (int i=1;i<=arr.size();i++) {
            cur = cur^arr[i-1];
            prefix[i] = cur;
        }

        for (auto& query : queries)
            res.push_back(prefix[query[1]+1] ^ prefix[query[0]]);
        
        return res;
    }
};

// prefix sum 
// prefix[i] reprsent o index xor 1,2...ti nth
// query[i, j] = prefix[j] xor prefix[i-1]
