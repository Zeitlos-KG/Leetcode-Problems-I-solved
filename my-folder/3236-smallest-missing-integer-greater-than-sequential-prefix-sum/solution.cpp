class Solution {
public:
    int missingInteger(vector<int>& nums) {
     unordered_map<int, int> mpp;
     for(auto it: nums){
        mpp[it]++;
     }  
     int index = 0; 
     int sum = nums[0];
     for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]-nums[i]==1){
            sum+=nums[i+1];
            index++;
        }
        else break;
     }
     do{
        if(mpp[sum]==0) return sum;
     }
     while(sum++);
     return 0;
    }
};
