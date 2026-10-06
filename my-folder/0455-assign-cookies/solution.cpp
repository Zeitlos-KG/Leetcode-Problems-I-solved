class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gs = g.size();
        int ss = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        int left = 0;
        int right = 0;
        while (left < gs && right < ss) {
            if (g[left] <= s[right]) {
                ans++;
                left++;
                right++;
            } else {
                right++;
            }
        }
        return ans;
    }
};
