class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        vector<int> all;
        int i=0;
        int len = 2;
        int t = 8;
        while(len!=9){
            if(i==t) {i=0;
            len++;
            t--;}
            all.push_back(stoi(digits.substr(i,len)));
            i++;
        }
        vector<int> result;
       for(int i=0;i<all.size();i++){
        if(all[i]>=low && all[i]<=high) result.push_back(all[i]);
        if(all[i]>high) break;
       }
        return result;
    }
};