class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string result;
        for(int i=0;i<n;i++){
            result+="()";
        }
        sort(result.begin(), result.end());
        vector<string> ans;
        do{
            if(result[0] == ')') continue;
            if(result[(2*n)-1] == '(') continue;
            stack<char> st;
            bool check = true;
            for(auto it: result){
                if(st.size()==0 && it==')') {
                    check = false;
                    break;
                }
                if(it == '(') st.push('(');
                else st.pop();
            }
            if(st.size()==0 && check == true) ans.push_back(result);
        }
        while(next_permutation(result.begin(), result.end()));
        return ans;
    }
};
