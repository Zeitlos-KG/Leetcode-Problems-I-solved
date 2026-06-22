class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return -1;
        int min = nums[0];
        int max = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<min) min = nums[i];
            if(nums[i]>max) max = nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=min && nums[i]!=max){
                return nums[i];
                break;
            }
        }
        return 0;
    }
};