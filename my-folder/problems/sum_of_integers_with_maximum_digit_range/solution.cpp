class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> copy (nums);
        vector<int> digitRanges;
        for(int i=0;i<n;i++){
            int largest = INT_MIN;
            int smallest = INT_MAX;
            while(copy[i]!=0){
                int digit = copy[i]%10;
                if(digit>largest) largest = digit;
                if(digit<smallest) smallest = digit;
                copy[i]/=10;
            }
            digitRanges.push_back(largest-smallest);
        }
        int sum = 0;
        int target = INT_MIN;
        for(int i=0;i<n;i++){
            if(digitRanges[i]>target) target = digitRanges[i];
        }
        for(int i=0;i<n;i++){
           if(digitRanges[i]==target) sum+= nums[i]; 
        }
        return sum;
    }
};