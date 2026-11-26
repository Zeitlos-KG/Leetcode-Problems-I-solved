class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10;
        bool ans = false;
        while(n-k>=0){
            ans = !ans;
            n-=k;
            k--;
        }
        return ans;
    }
};
