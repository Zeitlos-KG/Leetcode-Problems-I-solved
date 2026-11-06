class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x,
                             vector<int>& queries) {
        int a = queries.size();
        int y = logs.size();
        vector<pair<int, int>> sortedQueries;
        for (int i = 0; i < a; i++) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end());
        sort(logs.begin(), logs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        int left = 0;
        int right = 0;
        vector<int> result(a);
        unordered_map<int, int> mpp;
        for (int i = 0; i < a; i++) {
            int startTime = sortedQueries[i].first - x;
            int endTime = sortedQueries[i].first;
            while (right < y && logs[right][1] <= endTime) {
                mpp[logs[right][0]]++;
                right++;
            }
            while (left < y && logs[left][1] < startTime) {
                mpp[logs[left][0]]--;
                if (mpp[logs[left][0]] == 0) {
                    mpp.erase(logs[left][0]);
                }
                left++;
            }
            result[sortedQueries[i].second] = n - mpp.size();
        }
        return result;
    }
};
