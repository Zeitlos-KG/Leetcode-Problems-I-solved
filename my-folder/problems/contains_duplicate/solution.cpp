class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        for (auto c : mpp) {
            if (c.second > 1){
                return true;
                break;}
        }
        return false;
    }
};