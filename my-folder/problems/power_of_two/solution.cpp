class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
       else if(n>0){
       while(n!=1){
        if(n%2==0) n/=2;
        else if(n%2!=0) return false;
       }
       }
       return true;
    }
};