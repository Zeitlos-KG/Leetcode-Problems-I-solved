class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int n = s.size();
        int x = target.size();
        map<char,int> mpp;
        for(auto c: s){
            mpp[c]++;
        }
        map<char,int> freq;
        for(auto c: target){
            freq[c]++;
        }
        int min = mpp[target[0]]/freq[target[0]];
        for(int i=1;i<x;i++){
            int count = mpp[target[i]]/freq[target[i]];
            if(count<min) min = count;
        }
        return min;
    }
};