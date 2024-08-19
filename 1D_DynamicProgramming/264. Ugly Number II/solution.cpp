class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> pf = {2, 3, 5};
        vector<int> next = {2, 3, 5};
        vector<int> index = {0, 0, 0};
        vector<int> ugly(1,1);

        while(ugly.size()<n) {
            int minV = *min_element(next.begin(), next.end());
            if (minV != ugly.back())
                ugly.push_back(minV);
            for(int j=0;j<next.size();j++) {
                if (next[j] == minV) {
                    ++index[j];
                    next[j] = pf[j] * ugly[index[j]];
                    break;
                }
            }
        }

        return ugly.back();
    }
};

//1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15
//0  2  3  22 5 23  24 33 25  26  35

// vector [7,13]

// meet new number n
// check n%2  n%3  n%5
// if the remainders are all not zero, pass
// if it can be devided by 2 than find whether n/2 is ugly or not
// if true, then n is also ugly 
// Otherwise, n is not ugly 
