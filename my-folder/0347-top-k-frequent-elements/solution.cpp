class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        vector<pair<int, int>> v;
        for(auto it: mpp){
            v.push_back({it.second, it.first});
        }
        vector<int> result;
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        for(int i=0;i<k;i++){
            result.push_back(v[i].second);
        }
        return result;
    }
};
