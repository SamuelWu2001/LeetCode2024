class Solution {
public: 
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<bool> record(n, false); 
        queue<int> q;
        int count = 0;

        // need to find which one is the root
        for (int i=0;i<n;i++) {
            if (leftChild[i] != -1) 
                record[leftChild[i]] = true;
            if (rightChild[i] != -1) 
                record[rightChild[i]] = true;
        }

        for (int i=0;i<n;i++) {
            if (record[i] == true)
                record[i] = false;
            else {
                if (!q.empty()) return false;
                q.push(i);
            }
        }

        while (!q.empty()) {
            // make sure there are no shared child nodes and the child node cannot point to the parent node
            if (record[q.front()]) return false;
            record[q.front()] = true;
            if (leftChild[q.front()] != -1) 
                q.push(leftChild[q.front()]);
            if (rightChild[q.front()] != -1) 
                q.push(rightChild[q.front()]);
            q.pop();
            count++;
        }

        // make sure every node has been visited
        if (count != n) return false;
        return true;
    }
};
