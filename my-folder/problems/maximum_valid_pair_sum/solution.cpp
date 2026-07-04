class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> copy (nums);
        sort(copy.begin(),copy.end());
        int thermax = copy[n-1]+copy[n-2];
        int max = 0;
        for(int i=0;i<n-k;i++){
            for(int j=i+k;j<n;j++){
                if(nums[i]+nums[j]>max) max = nums[i]+nums[j];
                if(max == thermax) break;
            }
        }
        return max;
    }
};