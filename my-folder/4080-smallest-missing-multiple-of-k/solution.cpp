class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int ans;
        for(int i=1;i<=nums.size()+1;i++){
            if(mpp[i*k]==0) {ans = i*k; 
            break;}
        }
        return ans;
    }
};
