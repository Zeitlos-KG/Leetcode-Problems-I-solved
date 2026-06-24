class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        unordered_map<int,int> mpp;
        vector<int> nums;
        while(n!=0){
            nums.push_back(n%10);
            n/=10;
        }
        for(auto c: nums){
            mpp[c]++;
        }
        for(auto i: mpp){
            sum+=(i.first*i.second);
        }
        return sum;
    }
};