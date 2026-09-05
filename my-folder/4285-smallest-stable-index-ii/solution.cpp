class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max = -1;
        int min = INT_MAX;
        vector<int> copy = nums;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            nums[i] = max;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (copy[i] < min) {
                min = copy[i];
            }
            nums[i] -= min;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= k)
                return i;
        }
        return -1;
    }
};
