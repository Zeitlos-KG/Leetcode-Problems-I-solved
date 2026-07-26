class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();
        int pro1 = nums[0] * nums[1] * nums[2];
        int pro2 = nums[n - 1] * nums[n - 2] * nums[0];
        return max(pro1, pro2);
    }
};