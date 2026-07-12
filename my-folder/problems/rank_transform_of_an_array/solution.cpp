class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> copy = arr;
        sort(arr.begin(), arr.end());
        set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(arr[i]);
        }
        int rank = 1;
        map<int, int> mpp;
        for (auto it : st) {
            mpp[it] = rank;
            rank++;
        }
        vector<int> result;
        for (int i = 0; i < n; i++) {
            result.push_back(mpp[copy[i]]);
        }
        return result;
    }
};