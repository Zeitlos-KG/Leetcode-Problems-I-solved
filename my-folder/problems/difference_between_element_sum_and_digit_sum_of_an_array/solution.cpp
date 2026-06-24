class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            elementSum += nums[i];
            while (nums[i] != 0) {
                digitSum += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        return abs(elementSum - digitSum);
    }
};