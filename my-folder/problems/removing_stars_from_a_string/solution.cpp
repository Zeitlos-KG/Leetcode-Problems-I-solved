class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char> ss;
        for(int i=0;i<n;i++){
            if(s[i]!='*') ss.push(s[i]);
            else ss.pop();
        }
        int x = ss.size();
        string result(x,'*');
        for(int i=x-1;i>=0;i--){
            result[i] = ss.top();
            ss.pop();
        }
        return result;
    }
};