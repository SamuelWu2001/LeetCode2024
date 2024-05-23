class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandNum = 0;

        for (int i=0;i<grid.size();i++) {
            for (int j=0;j<grid[i].size();j++) {
                if (grid[i][j] == '1') {
                    findIsland(i, j, grid);
                    islandNum ++;
                }
            }
        }
        return islandNum;
    }

    void findIsland(int i, int j, vector<vector<char>>& grid) {
        grid[i][j] = 'v';
        if (i>0 && grid[i-1][j]=='1') findIsland(i-1, j, grid);
        if (j>0 && grid[i][j-1]=='1') findIsland(i, j-1, grid);
        if (i<grid.size()-1 && grid[i+1][j]=='1') findIsland(i+1, j, grid);
        if (j<grid[0].size()-1 && grid[i][j+1]=='1') findIsland(i, j+1, grid);
    }

};
