class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int x = tokens.size();
    stack<int> st;
    for(int i=0;i<x;i++){
        if(tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="+" && tokens[i]!="-") st.push(stoi(tokens[i]));
        else {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            if(tokens[i]=="*") st.push(y*x);
            else if(tokens[i]=="+") st.push(y+x);
            else if(tokens[i]=="-") st.push(y-x);
            else st.push(y/x);
        }
    }
    return st.top();
    }
};
