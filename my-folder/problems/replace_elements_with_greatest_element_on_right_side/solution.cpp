class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        arr.push_back(-1);
        int n = arr.size();
        int max = arr[n-1];
        for(int i=n-1;i>0;i--){
            if(max<=arr[i]) max = arr[i];
            result.push_back(max);
        }
        sort(result.begin(),result.end(),greater<int>());
        return result;
    }
};