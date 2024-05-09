class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> qualified_results;
        vector<int> current_combination;
        findQualifiedResults (candidates, target, current_combination, qualified_results);
        return qualified_results;
    }

    void findQualifiedResults (vector<int>& candidates, int target, vector<int>& current_combination, vector<vector<int>>& qualified_results) {
        for (int i=0;i<candidates.size();i++) {
            // make sure all combinations are in ascending order 
            if (!current_combination.empty() && current_combination.back() > candidates[i]) continue;

            if (candidates[i] == target) {
                current_combination.push_back(candidates[i]);
                qualified_results.push_back(current_combination);
                current_combination.pop_back();
            } else if (candidates[i] < target) {
                current_combination.push_back(candidates[i]);
                target -= candidates[i];
                findQualifiedResults(candidates, target, current_combination, qualified_results);
                current_combination.pop_back();
                target += candidates[i];
            }
        }
        return;
    }
};
