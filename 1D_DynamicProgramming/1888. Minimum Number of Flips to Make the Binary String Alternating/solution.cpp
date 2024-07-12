class Solution {
public:
    int minFlips(string s) {
        string ref0;
        string ref1;
        pair<char, char> p('0','1');
        int flipNum0 = 0, flipNum1 = 0;
        int newflipNum0, newflipNum1;
        int res = 0;

        for (int i=0;i<s.size();i++) {
            if (i%2 == 0) {
                ref0 += p.first;
                ref1 += p.second;
            } else {
                ref1 += p.first;
                ref0 += p.second;
            }
        }

        for (int i=0;i<s.size();i++) {
            if (s[i] != ref0[i])
                ++flipNum0;
            if (s[i] != ref1[i])
                ++flipNum1;
        }

        res = min(flipNum0, flipNum1);
        
        // eplore other rotation
        for (int i=0;i<s.size();i++) {
            newflipNum1 = flipNum0;
            if (ref0[0] != s[i])
                --newflipNum1;
            if (ref1.back() != s[i])
                ++newflipNum1;
            
            newflipNum0 = flipNum1;
            if (ref1[0] != s[i])
                --newflipNum0;
            if (ref0.back() != s[i])
                ++newflipNum0;
            
            flipNum0 = newflipNum0;
            flipNum1 = newflipNum1;
            res = min(res, flipNum0);
            res = min(res, flipNum1);
        }
        return res;
    }
};

//  10001 1 
// rotation:0 1 3
// 101010 : 2 4 2
// 010101 : 4 2 4
// x = 2-1+1 =2
// y = 4-0+0 =2

// initialize the two possible answer as reference started by 0 and 1
// go through the given string without rotation to fin how many flip operations we need
// x => 0  y => 1
// Go through every possible rotation
// after rotation
// newX = y - [if the 0 index char needs to flip or not] + [the incomming char needs to flip or not] 
// newY vise versa
//return the minimum flip number during the process
