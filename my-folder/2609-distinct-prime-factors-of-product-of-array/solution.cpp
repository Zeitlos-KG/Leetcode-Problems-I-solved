class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            for (int j = 2; j * j <= nums[i]; j++) {
                while (temp % j == 0) {
                    mpp[j]++;
                    temp /= j;
                }
            }
            if (temp > 1)
                mpp[temp]++;
        }
        return mpp.size();
    }
};
