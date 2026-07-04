class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int n = nums.size();
        int target = nums[n/2];
        if(mpp[target]==1) return true;
        else return false;
    }
};