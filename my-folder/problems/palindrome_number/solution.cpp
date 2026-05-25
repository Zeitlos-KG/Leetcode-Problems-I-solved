class Solution {
public:
    bool isPalindrome(long long x) {
        long long digit;
        long long temp = x;
        long long revNum = 0;
        if (x<0) return false;
        else if (x < INT_MIN || x > INT_MAX) return false;
        else while (x !=0){
        digit = x%10;
        revNum = revNum*10 + digit;
        x /= 10;
        }
        if (revNum == temp) return true;
        else return false;
    }
};