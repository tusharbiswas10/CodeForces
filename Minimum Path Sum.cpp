class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        //  ***** time complexity: O(m*n), approach: DP ******
        int r=grid.size();
        int c=grid[0].size();
        int result=0;
        /*this will fill only 1st row,
        so only movement here possible is right */
        
        for( int i=0;i<c;i++){
            result+=grid[0][i];
            grid[0][i]=result;
        }
        
        /*this will fill only 1st column,
        so only movement here possible is down */
        result=0;
        for( int i=0;i<r;i++){
            result+=grid[i][0];
            grid[i][0]=result;
        }
        
        //as 1st row and 1st column is done now we will have to calculate & fill other cells
        //we will take minimum value from top or left cell and add value from current cell value and store it
        for(int i=1;i<r;i++)
		{
            for(int j=1;j<c;j++)
            {                                                                            
                grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];
            }
    }
        // return last cell of grid for result as it stores the min possible path sum
        return grid[r-1][c-1];
	    
	    
	    // recursive solution
	    /* int getMinPath(vector <vector <int>> &grid, int i, int j) {
        if (i == 0 && j == 0) {
            return grid[i][j];
        }
        int m = INT_MAX;
        if (j > 0) {
            m = grid[i][j] + getMinPath(grid, i, j - 1);
        }
        if (i > 0) {
            int s = grid[i][j] + getMinPath(grid, i - 1, j);
            m = min(m, s);
        }
        return m;
    } */ 
    }
};
