class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(max < nums[i]) max = nums[i];
        }
        int sum = 0;
        int i=0;
        while(i!=k){
            sum+=(max+i);
            i++;
        }
        return sum;
    }
};