class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // 2 3 4 4 5 6
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxSum = nums[0] + nums[n - 1];
        int p1 = 0;
        int p2 = n - 1;
        while (p1 < p2) {
            int sum = nums[p1] + nums[p2];
            if (sum > maxSum)
                maxSum = sum;
            p1++;
            p2--;
        }
        return maxSum;
    }
};