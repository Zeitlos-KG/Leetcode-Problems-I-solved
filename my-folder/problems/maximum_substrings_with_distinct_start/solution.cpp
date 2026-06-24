class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
        }
        return st.size();
    }
};