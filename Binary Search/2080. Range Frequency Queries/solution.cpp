class RangeFreqQuery {
public:
    unordered_map<int, vector<int>> map;

    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
            map[arr[i]].push_back(i);
    }
    
    int query(int left, int right, int value) {

        int leftIndex = 0, rightIndex = 0;
        // find left index
        leftIndex = binarySearch(value, left);
        // find right index
        rightIndex = binarySearch(value, right);
        if (rightIndex == map[value].size() || map[value][rightIndex] != right) rightIndex -= 1;
        return rightIndex - leftIndex + 1;
    }

    int binarySearch(int value, int target) {
        int l = 0, r = map[value].size();
        while(l<r) {
            int mid = l+(r-l)/2;
            if (map[value][mid] == target) {
                return mid;
            } else if (map[value][mid] < target) {
                l = mid+1;
            } else {
                r = mid;
            }
        }
        return l;
    }
};
