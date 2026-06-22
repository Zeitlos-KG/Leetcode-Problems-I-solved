class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]+nums[i]<target) count++;
                else if(nums[j]+nums[i]>=target) break;
            }
        }
        return count;
    }
};