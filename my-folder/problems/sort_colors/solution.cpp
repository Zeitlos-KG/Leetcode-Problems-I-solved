class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero, one, two;
        zero = 0;
        one = 0;
        two = 0;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else two++;
        }
        for(i=0;i<zero;i++){
            nums[i]=0;
        }
        for(i=zero;i<zero+one;i++){
            nums[i]=1;
        }
        for(i=zero+one; i<nums.size();i++){
            nums[i]=2;
        }
    }
};