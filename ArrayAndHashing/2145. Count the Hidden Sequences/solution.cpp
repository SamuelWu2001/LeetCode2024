class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        vector<long long> prefixSum(differences.size()+1, 0);
        long long minV = INT_MAX, maxV=INT_MIN;
        for(int i=1; i<=differences.size(); i++) {
            prefixSum[i] = prefixSum[i-1] + differences[i-1];
        }

        for(auto sum : prefixSum) {
            minV = min(minV, sum);
            maxV = max(maxV, sum);
        }

        return int((upper-lower+1)-(maxV-minV)>0?(upper-lower+1)-(maxV-minV):0);
    }
};
