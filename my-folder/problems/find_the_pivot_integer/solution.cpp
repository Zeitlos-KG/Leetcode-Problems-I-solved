class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1)
            return 1;
        int leftSum = 1;
        int rightSum = 0;
        for (int i = 1; i <= n; i++) {
            rightSum += i;
        }
        for (int i = 2; i <= n; i++) {
            if (leftSum == rightSum)
                return i - 1;
            else {
                leftSum += i;
                rightSum -= (i - 1);
            }
        }
        return -1;
    }
};