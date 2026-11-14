class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> prefixSum;
        int n = nums.size();
        int sum = 0;
        prefixSum.push_back(0);
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            prefixSum.push_back(sum);
        }
        int ans = -1;
        while (l <= r) {
            for (int i = 0; i <= n - l; i++) {
                int x = prefixSum[i + l] - prefixSum[i];
                if (x > 0 && ans == -1)
                    ans = x;
                else if (x > 0 && x < ans)
                    ans = x;
            }
            l++;
        }
        return ans;
    }
};
