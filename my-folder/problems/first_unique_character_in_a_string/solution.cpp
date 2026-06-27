class Solution {
public:
    int firstUniqChar(string s) {
        int x = s.length();
        unordered_map<char, int> mpp;
        for (int i = 0; i < x; i++) {
            mpp[s[i]]++;
        }
        for (int j = 0; j < x; j++) {
            if (mpp[s[j]] == 1) {
                return j;
            }
        }
        return -1;
    }
};