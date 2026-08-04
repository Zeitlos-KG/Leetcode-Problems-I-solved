class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]!=1) {
                int j=nums[i]+1;
                while(j<nums[i+1]){
                    result.push_back(j);
                    j++;
                }}
        }
        return result;
    }
};
