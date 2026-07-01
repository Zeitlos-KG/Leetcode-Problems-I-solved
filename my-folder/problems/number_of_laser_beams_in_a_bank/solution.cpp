class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> security;
        int n = bank.size();
        int c = bank[0].size();
        for (int i = 0; i < n; i++) {
            int counter = 0;
            for (int j = 0; j < c; j++) {
                if (bank[i][j] == '1')
                    counter++;
            }
            if (counter > 0)
                security.push_back(counter);
        }
        int x = security.size();
        int sum = 0;
        for (int i = 1; i < x; i++) {
            sum = sum + (security[i] * security[i - 1]);
        }
        return sum;
    }
};