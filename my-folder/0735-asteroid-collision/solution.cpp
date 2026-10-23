class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        int n = ast.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(ast[i]);
            else if(st.top()<0 && ast[i]>0) {
                vector<int> temp;
                while(!st.empty()){
                    temp.push_back(st.top());
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                for(auto it: temp){
                    result.push_back(it);
                }
                st.push(ast[i]);
            }
            else if((st.top() > 0 && ast[i]>0) || (st.top() < 0 && ast[i]<0)) st.push(ast[i]);
            else if(st.top() == ast[i]*(-1)) st.pop();
            else {
                while(abs(st.top())<=abs(ast[i])){
                    if(st.top()==ast[i]*(-1)) {
                        st.pop();
                        break;
                    }
                    if(st.size()==1 && abs(st.top())<abs(ast[i])){
                        st.pop();
                        st.push(ast[i]);
                        break;
                    }
                    st.pop();
                    if(st.empty() && i!=n-1) {st.push(ast[i]);
                    break;}
                    else if(st.empty() && i==n-1) {
                    break;}
                }
            }
        }
        vector<int> temp2;
        while(!st.empty()){
            temp2.push_back(st.top());
            st.pop();
        }
        reverse(temp2.begin(), temp2.end());
        for(auto it: temp2){
            result.push_back(it);
        }
        return result;
    }
};
