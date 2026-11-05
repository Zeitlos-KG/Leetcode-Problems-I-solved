class Solution {
public:
    int n,m;
    vector<vector<int>> dp;
    int f(vector<vector<int>> &grid, int i, int j){
        if(i==n-1 && j==m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int right = 1e9;
        int down = 1e9;
        if(j<m-1) right = f(grid, i, j+1);
        if(i<n-1) down = f(grid, i+1, j);
        return dp[i][j] = grid[i][j] + min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
       dp.assign(n, vector<int> (m, -1));
       return f(grid, 0, 0);
    }
};
