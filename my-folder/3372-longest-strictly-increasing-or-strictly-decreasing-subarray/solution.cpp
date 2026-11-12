class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int x = nums.size();
        int incMax = 1;
        int decMax = 1;
        int inc = 1;
        int dec = 1;
        for(int i=0;i<x-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
            }
            else inc = 1;
            if(inc > incMax){
                incMax = inc;
            }
        }
        for(int i=0;i<x-1;i++){
            if(nums[i]>nums[i+1]){
                dec++;
            }
            else dec = 1;
            if(dec > decMax){
                decMax = dec;
            }
        }
        return max(decMax, incMax);
    }
};
