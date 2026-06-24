class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 48 && s[i] <= 57)
                st.pop();
            else
                st.push(s[i]);
        }
        int x = st.size();
        string result(x, 'a');
        for (int i = x - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};