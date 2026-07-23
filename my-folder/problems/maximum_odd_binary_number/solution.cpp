class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char, int> mpp;
        for (auto it : s) {
            mpp[it]++;
        }
        int n = s.size();
        string result(n, '0');
        result[n - 1] = '1';
        int x = mpp['1'] - 1;
        int y = mpp['0'];
        for (int i = 0; i < x; i++) {
            result[i] = '1';
        }
        for (int i = x; i < x + y; i++) {
            result[i] = '0';
        }
        return result;
    }
};