class Solution {
public:
    long long maximumValue(long long n, long long s, long long m) {
        long long result = s;
        long long max = s;
        if(n==1) return s;
        else if(n%2==0) max += ((n/2)*m)-((n/2)-1);
        else max += ((n/2)*m)-((n/2)-1);
        
        return max;
    }
};