class Solution {
public:
    int smallestNumber(int n, int t) {
     do{
        int copy = n;
        int product = 1;
        while(copy!=0){
            product*=copy%10;
            if(product%t==0) return n;
            copy/=10;
        }
     }
     while(n++);
     return 0;
    }
};
