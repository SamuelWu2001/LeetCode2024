class TimeMap {
public:
    unordered_map<string, vector<int>> map1;
    unordered_map<string, unordered_map<int, string>> map2;
    
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        map1[key].push_back(timestamp);
        map2[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        int l = 0, r = map1[key].size();
        if (r == 0) return "";
        while(l<r) {
            int mid = l + (r-l)/2;
            if (map1[key][mid] < timestamp) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        if (l == map1[key].size()) {
            if (map1[key][l-1] < timestamp)
                return map2[key][map1[key][l-1]];
            else 
                return "";
        } else if (l == 0) {
            if (map1[key][l] == timestamp)
                return map2[key][map1[key][l]];
            else 
                return "";
        } else if (map1[key][l] == timestamp) 
            return map2[key][map1[key][l]];
        else 
            return map2[key][map1[key][l-1]];

    }
};
