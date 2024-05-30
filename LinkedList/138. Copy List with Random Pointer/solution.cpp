/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummyHead = new Node(100000);
        Node* ptr1 = head;
        Node* ptr2 = dummyHead;
        unordered_map<Node*, Node*> map;

        while(ptr1!=NULL) {
            cout << ptr1->val << endl;
            Node* tmp = new Node(ptr1->val);
            map.insert({ptr1, tmp});
            ptr2->next = tmp;
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
            tmp = NULL;
            delete tmp;
        }
        ptr2->next = NULL;
        // traverse again to set random ptr
        ptr1 = head;
        ptr2 = dummyHead->next;
        while(ptr1!=NULL) {
            ptr2->random = map[ptr1->random];
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return dummyHead->next;
    }
};
