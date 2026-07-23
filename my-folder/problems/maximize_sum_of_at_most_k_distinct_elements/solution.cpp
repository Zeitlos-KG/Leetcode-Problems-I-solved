class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        stack<int> st;
        set<int> ss;
        for (auto it : nums) {
            ss.insert(it);
        }
        for (auto it : ss) {
            st.push(it);
        }
        vector<int> result;
        if (k > st.size())
            k = st.size();
        while (k--) {
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};