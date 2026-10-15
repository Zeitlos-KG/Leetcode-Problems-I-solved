class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                unordered_set<int> s;
                for(int k=j;k<=j+i;k++){
                    s.insert(nums[k]);
                }
                sum += s.size()*s.size();
            }
        }
        return sum;
    }
};
