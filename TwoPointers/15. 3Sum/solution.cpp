class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++) {
            if (i==0 || nums[i] != nums[i-1])
                twoSum(nums[i]*-1, nums, i+1, ans);
        }
        return ans;
    }

    void twoSum(int target, vector<int>& nums, int index, vector<vector<int>>& ans) {
        int left = index, right = nums.size()-1;
        while(left<right) {
            if (nums[left]+nums[right] == target) {
                if (left==index || nums[left] != nums[left-1])
                    ans.push_back({nums[index-1], nums[left], nums[right]});
                right--;
                left++;
            } else if (nums[left]+nums[right] > target)
                right--;
            else
                left++;
        }
    }
};
