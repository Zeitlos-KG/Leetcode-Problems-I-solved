class Solution {
public:
    bool squareIsWhite(string s) {
        int num = stoi(s.substr(1,1));
        int x;
        if(s[0] == 'a' || s[0] == 'c' || s[0]=='e' || s[0]=='g') x=1;
        else x=2;
        if((x+num)%2==0) return false;
        else return true;
    }
};