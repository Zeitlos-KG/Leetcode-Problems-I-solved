class Solution {
public:
    bool checkDivisibility(int n) {
        int copy = n;
        long long sum = 0;
        long long mul = 1;
        while(n!=0){
            long long digit = n%10;
            sum+=digit;
            mul*=digit;
            n/=10;
        }
        if(copy%(sum+mul)==0) return true;
        else return false;
    }
};
