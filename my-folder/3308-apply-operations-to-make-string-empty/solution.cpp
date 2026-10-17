class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char, int> mpp;
        for(auto it: s){
            mpp[it]++;
        }
        vector<pair<int, char>> v;
        for(auto it: mpp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        int a = v.size();
        unordered_map<char, int> result;
        int max = v[a-1].first;
        for(int i=a-1;i>=0;i--){
            if(v[i].first == max) result[v[i].second]= 1;
            else break;
        }
        int l = result.size();
        int x = s.size();
        string ans;
        int count = 0;
        for(int i=x-1;i>=0;i--){
            if(result[s[i]] == 1) {ans.push_back(s[i]);
            result[s[i]] = 0;
            count++;}
            if(count == l) break;
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
