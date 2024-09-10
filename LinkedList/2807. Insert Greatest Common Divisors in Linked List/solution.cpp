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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur = head;
        ListNode* temp;
        while(cur->next) {
            int gcd = GCD(cur->val, cur->next->val);
            ListNode* newNode = new ListNode(gcd);
            temp = cur->next;
            cur->next = newNode;
            newNode->next = temp;
            cur = temp;
        }
        return head;
    }

    int GCD(int a, int b) {
        if (a == b) return a;
        int maxV = max(a, b);
        int minV = min(a, b);
        
        while (true) {
            int temp = maxV % minV;
            if (temp == 0)
                return minV;
            maxV = minV;
            minV = temp;
        }
    }
};
