class Solution {
public:
    long long mySqrt(long long x) {
        if (x == 0)
            return 0;
        long long low = 1;
        long long high = x;
        long long np;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (mid * mid <= x){
                np = mid;
                low = mid+1;}
            else if (mid * mid > x){
                high = mid - 1;}
        }
        return np;
    }
};