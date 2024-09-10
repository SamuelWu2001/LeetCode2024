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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int direction = 0, x=0, y=0;
        vector<vector<int>> map (m, vector<int>(n, -1));

        while(head) {
            map[y][x] = head->val;
            if (direction==0) {   //right
                if (x<n-1 && map[y][x+1]==-1) {
                    x++;
                } else {
                    y++;
                    direction = 1;
                }
            } else if (direction == 1) {   // down
                if (y<m-1 && map[y+1][x]==-1) {
                    y++;
                } else {
                    x--;
                    direction = 2;
                }
            } else if (direction == 2) {   // left
                if (x>0 && map[y][x-1]==-1) {
                    x--;
                } else {
                    y--;
                    direction = 3;
                }
            } else if (direction == 3) {   // up
                if (y>0 && map[y-1][x]==-1) {
                    y--;
                } else {
                    x++;
                    direction = 0;
                }
            }

            head = head->next;
        }
        return map;
    }
};
