class Solution {
public:
    string digitSum(string s, int k) {
        string s2 = s;
        while(s2.size()>k){
            int x = s2.size();
            vector<string> ans;
            for(int i=0;i<x;i+=k){
                int n = k;
                if(i+k>=x){
                    n = x-i;
                }
                string a = s2.substr(i, n);
                int digitSum = accumulate(a.begin(), a.end(), 0) - (a.size()*'0');
                string b = to_string(digitSum);
                ans.push_back(b);
            }
            string c;
            for(int i=0;i<ans.size();i++){
                c+=ans[i];
            }
            s2 = c;
        }
        return s2;
    }
};
