class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int count = 0;
        while(high>=low){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) {count++;
            break;}
            else if(nums[mid]<=target) {
                low = mid+1;
            }
            else high = mid-1;
        }
        if(count == 0) {return result;}
        else {
            auto it = lower_bound(nums.begin(),nums.end(), target) - nums.begin();
            result[0] = it;
            auto it2 = upper_bound(nums.begin(),nums.end(), target) - nums.begin();
            result[1] = it2-1;
            return result;
        }
    }
};