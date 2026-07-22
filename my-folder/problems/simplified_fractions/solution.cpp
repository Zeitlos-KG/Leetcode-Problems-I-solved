class Solution {
public:
    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        return findGCD(b, a % b);
    }
    vector<string> simplifiedFractions(int n) {
        vector<string> result;
        if (n == 1) {
            return result;
        }
        unordered_set<double> st;
        for (int i = 2; i <= n; i++) {
            result.push_back(to_string(1) + '/' + to_string(i));
            st.insert(double(1 / i));
        }
        for (int i = 2; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (findGCD(i, j) == 1)
                    result.push_back(to_string(i) + "/" + to_string(j));
            }
        }
        return result;
    }
};