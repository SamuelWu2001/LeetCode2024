/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> uset;
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        ListNode* tmp = nullptr;

        for (int i=0;i<nums.size();i++)
            uset.insert(nums[i]);

        dummy->next = head;
        while (cur->next) {
            if (uset.find(cur->next->val)!=uset.end()) {
                tmp = cur->next;
                cur->next = tmp->next;
                tmp->next = nullptr;
                delete tmp;
            }
            else 
                cur = cur->next;
        }

        return dummy->next;
    }
};
