class Solution {
public:
    int minChanges(string s) {
       int x = s.size();
       int ans = 0;
       for(int i=0;i<x;i+=2){
        if(s[i]!=s[i+1]) ans++;
       }
       return ans; 
    }
};
