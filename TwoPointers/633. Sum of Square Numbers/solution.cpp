class Solution {
public:
    bool judgeSquareSum(int c) {
        int a = 0; int b = sqrt(c);
        while(a<=b) {
            long long sum = (long long)a*a + (long long)b*b;
            if(sum == c) 
                return true;
            else if (sum > c) 
                b--;
            else 
                a++;
        }
        return false;
    }
};
