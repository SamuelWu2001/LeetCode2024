class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        int factor = 2;
        int step = 0;
        while(n>1) {
            while(n%factor == 0) {
                step += factor;
                n /= factor;
            }
            factor++;
        }
        return step;
    }
};

// 9 AAA AAA AAA 
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15         16
// 0 2 3 4 5 5 7 6 6  7 11 7  13  9  8    8
            //  0+5 4+2 3+3        10
            //  2+3 2+4            4+4
            //  3+2                6+2
// prime factor [2,3,4,5,7,11]
