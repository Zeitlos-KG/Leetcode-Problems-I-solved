class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n/2;i++){
            swap(nums[2*i],nums[(2*i)+1]);
        }
        return nums;
    }
};