class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int sumVertical = 0;
        int sumHorizontal = 0;
        for (int i = 0; i < n; i++) {
            if (moves[i] == 'R')
                sumHorizontal += 1;
            else if (moves[i] == 'L')
                sumHorizontal -= 1;
            else if (moves[i] == 'U')
                sumVertical += 1;
            else
                sumVertical -= 1;
        }
        return (sumHorizontal == 0 && sumVertical == 0);
    }
};