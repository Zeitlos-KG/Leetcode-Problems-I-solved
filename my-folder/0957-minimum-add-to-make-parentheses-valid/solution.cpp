class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0;
        for (auto it: s) {
            if (it == ')' && st.size() == 0)
                ans++;
            else if (it == '(')
                st.push('(');
            else
                st.pop();
        }
        ans += st.size();
        return ans;
    }
};
