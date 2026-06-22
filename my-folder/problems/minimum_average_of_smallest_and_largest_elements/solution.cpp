class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int p1 = 0;
        int p2 = n-1;
        double minAvg = (nums[p1]+nums[p2])/2.0;
       while(p1<p2){
        double avg = (nums[p1]+nums[p2])/2.0;
        if(avg<minAvg) {minAvg = avg;}
        p1++;
        p2--;
       }
        return minAvg;
    }
};