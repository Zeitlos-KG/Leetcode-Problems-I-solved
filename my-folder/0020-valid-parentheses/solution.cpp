class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    int x = s.size();
    if(s[0]==')' || s[0]==']' || s[0]=='}') return false;
    for(int i=0;i<x;i++){
        if(st.empty() && (s[i]=='}' || s[i]==']' || s[i]==')')) return false;
        else if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{')) st.pop();
        else break;
    }
    if(st.size()==0) return true;
    else return false;
    }
};
