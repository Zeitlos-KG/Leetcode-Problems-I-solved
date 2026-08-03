class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>> result(c, vector<int>(r,0)); 
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                result[i][j] = matrix[j][i];
            }
        }
        return result;
    }
};
