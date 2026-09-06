class Solution {
public:
    int numDistinct(string s, string t) {
                int n1=s.length();
        int n2=t.length();

        vector<unsigned long long> subs(n2+1,0);
        subs[0]=1;

        for(int i=0;i<n1;i++){
            for(int j=n2;j>=1;j--){
                if(s[i]==t[j-1]){
                    subs[j]+=subs[j-1];
                }
            }
        }
        return subs[n2];
    }
};
