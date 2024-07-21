class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        int prev = 0;
        pair<int, int> item1, item2;
        vector<int> res;

        for (auto barcode : barcodes) {
            map[barcode]++;
        } 
        for (const auto it : map) {
            pq.push({it.second, it.first});
        }

        while (!pq.empty()) {
            item1 = pq.top();
            pq.pop();
            if (item1.second != prev) {
                res.push_back(item1.second);
                item1.first--;
                prev = item1.second;
                if (item1.first != 0) {
                    pq.push(item1);
                }
            } else {
                item2 = pq.top();
                pq.pop();
                res.push_back(item2.second);
                item2.first--;
                prev = item2.second;
                if (item2.first != 0) {
                    pq.push(item2);
                }
                pq.push(item1);
            }
        }
        return res;
    }
};
