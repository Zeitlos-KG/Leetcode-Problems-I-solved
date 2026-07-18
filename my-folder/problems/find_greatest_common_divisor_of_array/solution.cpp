class Solution {
public:
    int GCD(int a, int b){
        if(b==0) return a;
        return GCD(b, a%b);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]<min) min = nums[i];
            if(nums[i]>max) max = nums[i];
        }
        return GCD(min, max);

    }
};