class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> checklist;
        for (int i=0;i<nums.size();i++) {
            if (checklist.find(nums[i]) == checklist.end())
                checklist.insert(nums[i]);
            else return true;
        }
        return false;
    }
};
