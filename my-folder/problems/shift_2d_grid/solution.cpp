class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> copy = grid;
        int x = grid.size();
        int y = grid[0].size();
        vector<vector<int>> final(x, vector<int>(y, 0));
        if (x == 1 && y == 1 && k == 0) {
            final[0][0] = grid[0][0];
            return final;
        }
        while (k--) {
            for (int i = 0; i < x; i++) {
                for (int j = 0; j < y - 1; j++) {
                    final[i][j + 1] = copy[i][j];
                }
            }
            for (int i = 0; i < x - 1; i++) {
                final[i + 1][0] = copy[i][y - 1];
            }
            final[0][0] = copy[x - 1][y - 1];
            copy = final;
        }
        return final;
    }
};