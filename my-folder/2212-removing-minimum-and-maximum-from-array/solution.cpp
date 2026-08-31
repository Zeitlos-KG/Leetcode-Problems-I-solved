class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int maxIndex;
        int minIndex;
        int x = nums.size();
        for (int i = 0; i < x; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                minIndex = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }
        }
        int case1 = max(maxIndex, minIndex) + 1;
        int case2 = x - (min(maxIndex, minIndex));
        int case3 =
            (min(maxIndex, minIndex) + 1) + (x - (max(maxIndex, minIndex)));
        return min({case1, case2, case3});
    }
};
