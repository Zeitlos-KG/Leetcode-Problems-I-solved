class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long ans = 0;
        int i = 0;
        while (i < n) {
            if (nums[i] >= minK && nums[i] <= maxK) {
                int j = i;
                while (j < n && nums[j] >= minK && nums[j] <= maxK) j++;
                long long len = j - i;
                ans += len * (len + 1) / 2;
                i = j;
            } else {
                i++;
            }
        }
        return ans;
    }
};
