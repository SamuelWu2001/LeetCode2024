class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> mergedIntervals;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        for (int i=0;i<intervals.size();i++) {
            if (mergedIntervals.empty()) mergedIntervals.push_back(intervals[i]);
            vector<int> *last = &(mergedIntervals.back());
            if (intervals[i][0] > (*last)[1]) mergedIntervals.push_back(intervals[i]);
            else if (intervals[i][1] <= (*last)[1]) continue;
            else (*last)[1] = intervals[i][1];
        }

        return mergedIntervals;
    }
};
