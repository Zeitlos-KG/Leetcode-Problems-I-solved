class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int sum = 0;
       int max = 0;
       int n = gain.size();
       for(int i=0;i<n;i++){
        sum+=gain[i];
        if(sum>max) max = sum;
       } 
       return max;    }
};