class Solution {
public:
    long long minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size();
        long long max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (max < piles[i])
                max = piles[i];
        }
        long long low = 1;
        long long high = max;
        int ans = INT_MAX;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sumHours = 0;
            for (int i = 0; i < n; i++) {
                if (piles[i] % mid == 0)
                    sumHours += (piles[i] / mid);
                else
                    sumHours += ((piles[i] / mid) + 1);
            }
            if (sumHours <= h) {
                if (mid < ans)
                    ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};