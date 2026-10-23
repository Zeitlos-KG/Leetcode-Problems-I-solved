class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        int n = nums.size();
        vector<int> result;
        for (int i = 1; i <= n; i++) {
            if (mpp[i] == 0)
                result.push_back(i);
        }
        return result;
    }
};
