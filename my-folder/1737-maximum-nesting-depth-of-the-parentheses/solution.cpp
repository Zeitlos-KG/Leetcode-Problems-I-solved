class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int max = 0;
        for(auto it: s){
            if(it=='(') st.push('*');
            else if(it==')') st.pop();
            if(st.size()>max) max = st.size();
        }
        return max;
    }
};
