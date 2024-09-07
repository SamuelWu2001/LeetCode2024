class Solution {
public:
    int minimumNumbers(int num, int k) {
        unordered_map<int, int> map;
        // edge case
        if (num == 0) 
            return 0;
        if (k == 0) {
            if (num % 10 == 0) 
                return 1;
            else
                return -1;
        }

        int time = 1;
        int v = k;
        map[v] = time;
        while(true) {
            v += k;
            v %= 10;
            ++time;
            if (v == k)
                break;
            map[v] = time;
        }

        int target = num % 10;
        if (map[target] == 0)
            return -1;
        else {
            if (num < k*map[target])
                return -1;
            else
                return map[target];
        }
    }
};



// vetor [1 - 9]
// unordered_map {num, time}
