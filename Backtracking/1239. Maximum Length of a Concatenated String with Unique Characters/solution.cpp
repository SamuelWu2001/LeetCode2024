class Solution {
public:
    int maxLength(vector<string>& arr) {
        unordered_map<char, int> record = {};
        int maxLength = 0;
        helper(arr, record, 0, maxLength);
        return maxLength;
    }

    void helper(vector<string>& arr, unordered_map<char, int>& record, int index, int& maxLength) {
        if (index == arr.size()) {
            maxLength = max(maxLength, int(record.size()));
            return;
        }
        string currnt = arr[index];
        bool valid = true;
        for (int i=0;i<current.size();i++) {
            if (record[current[i]] > 0) {
                valid = false;
            }
            record[current[i]] += 1;
        }
        if (valid)
            helper(arr, record, index+1, maxLength);
        
        for (int i=0;i<current.size();i++){
            if (record[current[i]] == 1) {
                record.erase(current[i]);
            } else {
                record[current[i]] -= 1;
            }
        }
                
        helper(arr, record, index+1, maxLength);
        return;
    }
};
