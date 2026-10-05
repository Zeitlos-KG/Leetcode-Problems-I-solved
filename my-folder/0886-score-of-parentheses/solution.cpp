class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<char> st;
       int max = 0;
       int sum = 0;
       for(int i=0;i<s.size();i++){
        if(st.size()==0) max = 0;
        if(s[i] == '(') st.push('(');
        else{
            if(s[i+1] != ')') sum+=pow(2, max-1);
            st.pop(); 
            if(s[i+1]!=')') max = st.size();
        } 
        if(max < st.size())  max = st.size();
       } 
       return sum;
    }
};
