class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int leftSum = nums[0];
        int rightSum = 0;
        for(int i=1;i<n;i++){
            rightSum+=nums[i];
        }
        for(int i=1;i<n;i++){
            leftSum+=nums[i];
            rightSum-=nums[i];
            if((leftSum-rightSum)%2==0) count++;
        }
        return count;
    }
};