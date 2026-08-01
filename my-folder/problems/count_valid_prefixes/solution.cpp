class Solution {
public:
    int countValidPrefixes(string s) {
        int count = 0;
        int ones = 0;
        int zeros = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') zeros++;
            else ones++;
            if(abs(zeros-ones)<=1) count++;
        }
        return count;
    }
};