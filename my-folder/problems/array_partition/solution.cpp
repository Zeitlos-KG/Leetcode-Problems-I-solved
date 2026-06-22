class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // 1 2 2 5 6 6
        int n = nums.size();
        int sum = 0;
        for (int i = n - 1; i >= 0; i -= 2) {
            sum += min(nums[i], nums[i - 1]);
        }
        return sum;
    }
};