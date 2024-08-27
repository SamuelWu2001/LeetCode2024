class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0;
        int ans = 0;

        for(auto c : s) {
            if (c=='b') 
                b++;
            else
                ans = min(ans+1, b);
        }

        return ans;
    }
};

// dp 
// aabaabbab
// count_b 4
// deletion 2
