class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> result(n, 0);
        int sumL = 0;
        for (int i = 1; i < n; i++) {
            sumL += nums[i - 1];
            leftSum[i] = sumL;
        }
        int sumR = 0;
        for (int i = n - 2; i >= 0; i--) {
            sumR += nums[i + 1];
            rightSum[i] = sumR;
        }
        for (int i = 0; i < n; i++) {
            result[i] =
                max(leftSum[i], rightSum[i]) - min(leftSum[i], rightSum[i]);
        }
        return result;
    }
};