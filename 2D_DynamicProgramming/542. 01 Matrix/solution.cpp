class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> res(mat.size(), vector<int> (mat[0].size(), INT_MAX-1));

        for (int i=0;i<mat.size();i++) {
            for (int j=0;j<mat[0].size();j++){
                // itself
                if (mat[i][j] == 0) 
                    res[i][j] =0;
                // right
                if (j<mat[0].size()-1)
                    res[i][j+1] = min(res[i][j+1], res[i][j]+1);
                //bottom
                if (i<mat.size()-1)
                    res[i+1][j] = min(res[i+1][j], res[i][j]+1);
            }
        }
        for (int i=mat.size()-1;i>=0;i--) {
            for (int j=mat[0].size()-1;j>=0;j--){
                // top
                if (i>0) 
                    res[i-1][j] = min(res[i-1][j], res[i][j]+1);
                // left
                if (j>0)
                    res[i][j-1] = min(res[i][j-1], res[i][j]+1);
            }
        }

        return res;
    }
};
