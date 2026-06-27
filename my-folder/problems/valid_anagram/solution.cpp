class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        int ss = s.size();
        int tt = t.size();
        for (int i = 0; i < ss; i++) {
            mpp1[s[i]]++;
        }
        for (int i = 0; i < tt; i++) {
            mpp2[t[i]]++;
        }
        if (mpp1 == mpp2)
            return true;
        else
            return false;
    }
};