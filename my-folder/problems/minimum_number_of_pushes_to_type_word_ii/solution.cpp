class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        unordered_map<char, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[word[i]]++;
        }
        int result = 0;
        vector<pair<int, char>> v;
        for (auto it : mpp) {
            v.emplace_back(it.second, it.first);
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        int x = v.size();
        int j = 1;
        int z = 1;
        for (int i = 0; i < x; i++) {
            if (z % 9 == 0) {
                j++;
                z = 1;
            }
            result += (v[i].first * j);
            z++;
        }
        return result;
    }
};