class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int x = nums.size();
      int low = 0;
      int high = x-1;
      while(low<=high){
        int mid = low + (high-low)/2;
        if(x==1) return mid;
        else if(mid == 0){
            if(nums[mid]>nums[mid+1]) return mid;
            else low = mid+1;
        }
        else if(mid == x-1){
            if(nums[mid]>nums[mid-1]) return mid;
            else high = mid-1;
        }
        else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
        else if(nums[mid]<nums[mid-1]) high = mid-1;
        else low = mid+1;
      }  
      return 0;
    }
};
