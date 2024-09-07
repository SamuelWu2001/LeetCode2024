class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> px(grid[0].size());
    	vector<int> py(grid.size());
    	int count = 0;
    	// complete px py  O(m*n)
    	for(int i=0;i<grid.size();i++) {
            for (int j=0;j<grid[0].size();j++) {
                if (grid[i][j]) {
                    px[j]++;
        	        py[i]++;
                }
            }
        }

        // traverse O(m*n)
        for(int i=0;i<grid.size();i++) {
            for (int j=0;j<grid[0].size();j++) {
        	    if (grid[i][j]) {
        	        if (px[j]>1 || py[i]>1) 
        		        count++;
                }
            }
        }

        return count;

    }
};
