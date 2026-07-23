class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        vector<int> prefixSum;
        int sum = 0;
        for (int i = 0; i < capacity.size(); i++) {
            prefixSum.push_back(sum += capacity[i]);
        }
        int sum2 = 0;
        for (int i = 0; i < apple.size(); i++) {
            sum2 += apple[i];
        }
        for (int i = 0; i < prefixSum.size(); i++) {
            if (sum2 <= prefixSum[i])
                return i + 1;
        }
        return 0;
    }
};