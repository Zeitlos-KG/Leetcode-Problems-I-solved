class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x = nums.size();
        int max = nums[0];
        for(int i=1;i<x;i++){
            if(nums[i]>max) max = nums[i];
        }
        int ans = 0;
        for(int i=0;i<x;i++){
            ans+=(max-nums[i]);
        }
        return ans;
    }
};
