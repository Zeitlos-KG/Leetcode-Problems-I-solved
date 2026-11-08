class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> row;
        vector<int> col;

        for (int i = 0; i < n; i++) {
            int r = 0;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1)
                    r++;
            }
            row.push_back(r);
        }

        for (int i = 0; i < m; i++) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                if (grid[j][i] == 1)
                    c++;
            }
            col.push_back(c);
        }

        vector<vector<int>> v(n, vector<int>(m, 0));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v[i][j] = row[i] + col[j] - 2;
                if (v[i][j] > 0 && grid[i][j] == 1)
                    ans++;
            }
        }
        return ans;
    }
};
