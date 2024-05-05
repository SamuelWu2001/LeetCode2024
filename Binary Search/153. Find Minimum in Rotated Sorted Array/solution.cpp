class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int middle = 0;
        while(true) {
            // edge case : length = 1 or 2
            if (end-start == 0) return nums[start];
            if (end-start == 1) return min(nums[start], nums[end]);

            middle = start + (end-start)/2;
            if (nums[middle] < nums[middle-1]) return nums[middle];
            if (nums[middle] < nums[end]) end = middle-1;
            else start = middle + 1;
        }
        return -1;
    }
};
