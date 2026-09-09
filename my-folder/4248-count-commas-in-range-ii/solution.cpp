class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        if(n<=999) return ans;
        else if (n<=(1e6)-1 && n>=1e3) {
            ans+= (n-(1e3)+1);
            return ans;
        }
        ans+=(((1e6))-1e3)*1;
        if (n<=1e9-1 && n>=1e6) {
            ans+=(n-(1e6)+1)*2;
            return ans;
        } 
        ans+=(((1e9))-1e6)*2;
        if (n<=(1e12)-1 && n>=1e9){
            ans+=(n-(1e9)+1)*3;
            return ans;
        }
        ans+=(((1e12))-1e9)*3;
        if (n<=(1e15)-1 && n>=1e12){
            ans+=(n-(1e12)+1)*4;
            return ans;
        }
        ans+=(n-(1e12)+1)*4;
        return ans+=1;
    }
};
