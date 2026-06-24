class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        if (n == 1)
            return 1;
        for (int i = 1; i <= (2 * n); i++) {
            if (i % 2 == 0)
                sumEven += i;
            else
                sumOdd += i;
        }
        int mini = min(sumOdd, sumEven);
        while (mini--) {
            if (sumOdd % mini == 0 && sumEven % mini == 0)
                return mini;
        }
        return 1;
    }
};