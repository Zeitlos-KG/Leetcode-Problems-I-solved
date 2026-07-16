class Solution {
public:
    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        return findGCD(b, a % b);
    }
    long long gcdSum(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        vector<int> prefixGCD;
        for (int i = 0; i < n; i++) {
            if (mx < nums[i])
                mx = nums[i];
                prefixGCD.push_back(findGCD(nums[i], mx));
        }
        sort(prefixGCD.begin(), prefixGCD.end());
        long long sum = 0;
        for (int i = 0; i < n / 2; i++) {
            sum += findGCD(prefixGCD[i], prefixGCD[n - 1 - i]);
        }
        return sum;
    }
};