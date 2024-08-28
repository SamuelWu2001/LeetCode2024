class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        vector<vector<bool>> visited(grid2.size(), vector<bool>(grid2[0].size(), false));
        int count = 0;

        for(int i=0;i<grid2.size();i++) {
            for(int j=0;j<grid2[0].size();j++) {
                if (grid2[i][j] == 1 && !visited[i][j]){
                    if (explore(grid1, grid2, i, j, visited))
                        count++;
                }
            }
        }

        return count;
    }

    bool explore(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, vector<vector<bool>>& visited) {
        visited[i][j] = true;
        bool top=true, bottom=true, left=true, right=true;
        // top
        if (i>0 && grid2[i-1][j] == 1 && !visited[i-1][j])
            top = explore(grid1, grid2, i-1, j, visited);
        if (i<grid2.size()-1 && grid2[i+1][j] == 1 && !visited[i+1][j])  // bottom
            bottom = explore(grid1, grid2, i+1, j, visited);
        if (j>0 && grid2[i][j-1] == 1 && !visited[i][j-1])  // left
            left = explore(grid1, grid2, i, j-1, visited);
        if (j<grid2[0].size()-1 && grid2[i][j+1] == 1 && !visited[i][j+1])  // right
            right = explore(grid1, grid2, i, j+1, visited);
        
        return (grid1[i][j]) && top && bottom && left && right;
    }
};

// built a same size map to record whether the pixel is visited or not
// traverse all the island in grid2 at the same time check if it is a subisland by comparing the corresponding pixel in grid1
