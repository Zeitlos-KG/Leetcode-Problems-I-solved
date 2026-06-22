class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto c: arr){
            mpp[c]++;
        }
        vector<int> freq;
        for(auto i:mpp){
            freq.push_back(i.second);
        }
        sort(freq.begin(),freq.end());
        int x = freq.size();
        for(int i=0;i<x-1;i++){
            if(freq[i]==freq[i+1]) return false;
        }
        return true;
    }
};