class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> n;
        for (auto it : nums) {
            n[it]++;
        }
        for (int i = 1; i <= INT_MAX; i++) {
            if (n[i] == 0)
                return i;
        }
        return INT_MAX;
    }
};