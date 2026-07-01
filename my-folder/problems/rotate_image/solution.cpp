class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //1 4 7
    //2 5 8
    //3 6 9
   for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
   }
    }
};