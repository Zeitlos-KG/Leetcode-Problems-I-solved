class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;

        for (int c = n; c >= 0; c--) {
            int a = 1, b = c - 1;

            while (a <= b) {
                int val = a * a + b * b;
                if (val == c * c) {
                    cnt++;
                    a++, b--;
                } else if (val > c * c)
                    b--;
                else
                    a++;
            }
        }

        return cnt * 2;
    }
};