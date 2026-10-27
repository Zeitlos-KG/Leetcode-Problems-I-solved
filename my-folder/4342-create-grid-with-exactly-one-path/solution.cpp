class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v;
        string s(n, '#');
        string final(n, '.');
        s[0] = '.';
        for (int i = 0; i < m - 1; i++) {
            v.push_back(s);
        }
        v.push_back(final);
        return v;
    }
};
