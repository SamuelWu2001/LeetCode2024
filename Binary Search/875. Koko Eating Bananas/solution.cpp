class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1e9;

        while (left < right) {
            int mid = left + (right-left)/2;
            if (!cal(mid, piles, h)){
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;

    }

    bool cal(int mid, vector<int>& piles, int h) {
        int count = 0;
        for(auto pile : piles) {
            if (pile%mid == 0) 
                count += pile/mid;
            else
                count += pile/mid + 1;
        }
        return !(count > h);
    }
};
