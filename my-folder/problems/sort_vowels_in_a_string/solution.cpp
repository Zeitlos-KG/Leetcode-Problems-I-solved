class Solution {
public:
    string sortVowels(string s) {
        vector<int> indexVowels;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'E' || s[i] == 'A' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U')
                indexVowels.push_back(i);
            if (s[i] == 'e' || s[i] == 'a' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
                indexVowels.push_back(i);
        }
        int x = indexVowels.size();
        vector<int> ASCII;
        for (int i = 0; i < x; i++) {
            ASCII.push_back(s[indexVowels[i]]);
        }
        sort(ASCII.begin(), ASCII.end());
        for (int i = 0; i < x; i++) {
            s[indexVowels[i]] = ASCII[i];
        }
        return s;
    }
};