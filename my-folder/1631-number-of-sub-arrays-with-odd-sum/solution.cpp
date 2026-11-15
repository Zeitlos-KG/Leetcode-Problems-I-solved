class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<int> prefixSum;
        prefixSum.push_back(0);
        int n = arr.size();
        int sum = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            prefixSum.push_back(sum);
        }
        vector<pair<int, int>> p;
        int evens = 0, odds = 0;
        for (int i = n; i >= 0; i--) {
            p.push_back({evens, odds});
            if (prefixSum[i] % 2 == 0)
                evens++;
            else
                odds++;
        }
        reverse(p.begin(), p.end());
        for (int i = 0; i < n + 1; i++) {
            if (prefixSum[i] % 2 == 0)
                ans += p[i].second;
            else
                ans += p[i].first;
        }
        ans %= (1000000007);
        return ans;
    }
};
