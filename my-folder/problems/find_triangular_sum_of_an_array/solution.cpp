class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while (n--) {
            for (int i = 0; i <= n - 1; i++) {
                nums[i] += nums[i + 1];
                if (nums[i] >= 10)
                    nums[i] %= 10;
            }
        }
        return nums[0];
    }
};