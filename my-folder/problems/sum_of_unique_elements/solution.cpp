class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto c:nums){
            mpp[c]++;
        }
        int sum =0;
        for(auto i: mpp){
            if(i.second==1) sum+=i.first;
        }
        return sum;
    }
};