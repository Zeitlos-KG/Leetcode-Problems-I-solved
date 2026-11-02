class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums.size();
        int target;
        if (x % 2 != 0) {
            target = nums[x / 2];
        } else {
            target = (nums[x / 2] + nums[(x / 2) - 1]) / 2;
        }
        int sum = 0;
        for (int i = 0; i < x; i++) {
            sum += abs(target - nums[i]);
        }
        return sum;
    }
};
