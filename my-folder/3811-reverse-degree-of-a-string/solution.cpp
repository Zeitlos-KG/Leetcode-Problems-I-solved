class Solution {
public:
    int reverseDegree(string s) {
        int x = s.size();
        int result = 0;
        for(int i=0;i<x;i++){
            int a = abs(s[i]-'z')+1;
            result += a*(i+1);
        }
        return result;
    }
};
