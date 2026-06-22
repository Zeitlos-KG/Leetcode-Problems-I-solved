class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxSum = 0;
        int minSum = 0;
        for(int i=0;i<k;i++){
            minSum += nums[i];
        }
        for(int i=n-1;i>=n-k;i--){
            maxSum += nums[i];
        }
        return abs(maxSum - minSum);
            }
};