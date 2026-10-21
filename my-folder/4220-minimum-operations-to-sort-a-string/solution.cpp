class Solution {
public:
    int minOperations(string s) {
        string copy = s;
        int x = s.size();
        sort(copy.begin(), copy.end());
        if (s == copy)
            return 0;
        else if (s[0] == copy[0] || s[x - 1] == copy[x - 1])
            return 1;
        else if (s[0] != copy[0] && x == 2)
            return -1;
        else {
            for (int i = 1; i < x - 1; i++) {
                if (s[i] == copy[0] || s[i] == copy[x - 1])
                    return 2;
            }
            return 3;
        }
    }
};
