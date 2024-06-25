class Solution {
public:
    int countHousePlacements(int n) {
        int mod = 1000000007;
        long long end0 = 1, end1 = 1;
        long long newEnd0, newEnd1;

        for(int i=2;i<=n;i++) {
            newEnd1 = end0%mod;
            newEnd0 = (end1%mod + end0%mod)%mod;
            end0 = newEnd0;
            end1 = newEnd1;
        }

        return int((((end0+end1)%mod) * ((end0+end1)%mod))%mod);
    }
};
