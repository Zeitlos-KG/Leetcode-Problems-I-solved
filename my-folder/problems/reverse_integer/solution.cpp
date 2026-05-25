class Solution {
public:
    long long reverse(long long x) {
        long long digit;
        long long revNum = 0;
        while (x!=0){
        digit = x%10;
        revNum = revNum*10 + digit;
        x /= 10;
        }
        if (revNum < INT_MIN || revNum > INT_MAX) return 0;
        return revNum;
}
};
