class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> column;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for (auto it : row) {
            for (int j = 0; j < c; j++) {
                matrix[it][j] = 0;
            }
        }
        for (auto it : column) {
            for (int i = 0; i < r; i++) {
                matrix[i][it] = 0;
            }
        }
    }
};