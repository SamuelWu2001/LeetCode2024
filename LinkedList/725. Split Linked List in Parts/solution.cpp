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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res(k, nullptr);
        // calculate the length of the linked list
        ListNode* cur = head;
        int len = 0;
        while(cur) {
            len++;
            cur = cur->next;
        }

        int r = len%k;
        int q = len/k;

        cur = head;
        ListNode* temp;
        for (int i=0;i<k;i++) {
            res[i] = cur;
            
            if (i<r){
                for(int j=0;j<q;j++)
                    cur = cur->next;
            } else {
                for(int j=0;j<q-1;j++)
                    cur = cur->next;
            }

            if (cur) {
                temp = cur->next;
                cur->next = nullptr;
                cur = temp;
            }
        }
        return res;
    }
};
