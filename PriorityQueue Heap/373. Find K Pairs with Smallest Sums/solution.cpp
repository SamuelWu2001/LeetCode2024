class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<vector<int>> res;

        for (int i=0;i<min(k, (int)nums1.size());i++) {
            pq.push({nums1[i]+nums2[0], {i, 0}});
        }

        for (int i=0;i<k;i++) {
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();
            res.push_back({nums1[x], nums2[y]});
            if (y<nums2.size()-1)
                pq.push({nums1[x]+nums2[y+1], {x, y+1}});
        }

        return res;
    }
};
