class Solution {
public:
    int minPartitions(string n) {
        int x = n.size();
        int i = 0;
        char max = '0';
        while (i != x) {
            if (n[i] > max)
                max = n[i];
            if (n[i] == '9')
                break;
            i++;
        }
        return max-'0';
    }
};