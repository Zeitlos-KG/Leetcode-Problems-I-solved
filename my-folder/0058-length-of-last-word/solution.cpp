class Solution {
public:
    int lengthOfLastWord(string s) {
        int x = s.size();
        int i = x-1;
        while(s[i]==' '){
            i--;
        }
        int count = 0;
        while(s[i]!=' '){
            count++;
            i--;
            if(i==-1) break;
        }
        return count;
    }
};
