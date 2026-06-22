class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        vector<int> result;
        for (auto c : mpp) {
            if (c.second == 2)
                result.push_back(c.first);
        }
        return result;
    }
};