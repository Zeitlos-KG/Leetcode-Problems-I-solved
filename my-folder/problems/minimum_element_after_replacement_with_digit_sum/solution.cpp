class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> digitSum(n);
        for(int i=0;i<n;i++){
            int digitsum=0;
            while(nums[i]!=0){
                digitsum+=nums[i]%10;
                nums[i]/=10;
            }
            digitSum[i]=digitsum;
        }
        int minEl = digitSum[0];
        for(int i=1;i<n;i++){
            if(digitSum[i]<minEl) minEl = digitSum[i];
        }
        return minEl;
    }
};