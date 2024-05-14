class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) return true;

        int current = 0;
        int farPos = nums[0];

        while((farPos-current) > 0) {
            int nextFarPos = 0;
            for (int i=current+1;i<=farPos;i++) {
                nextFarPos = max(nextFarPos, (i+nums[i]));
                if (nextFarPos >= nums.size()-1) return true;
            }
            current = farPos;
            farPos = nextFarPos;
        }

        return false;
    }
};
