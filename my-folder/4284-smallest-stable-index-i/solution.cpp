class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        for(int i=0;i<n;i++){
            int maxEl = INT_MIN;
            int minEl = INT_MAX;
            for(int j=0;j<=i;j++){
                if(nums[j]>maxEl) maxEl = nums[j];
            }
            for(int j=i;j<n;j++){
                if(nums[j]<minEl) minEl = nums[j];
            }
            if(maxEl - minEl <= k) return i; 
        }
        return ans;
    }
};
