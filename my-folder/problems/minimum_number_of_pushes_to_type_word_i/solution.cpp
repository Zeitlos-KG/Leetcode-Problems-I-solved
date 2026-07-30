class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n <= 8) return word.size();
        int result = 0;
        int add = 1;
        int x = 1;
        while(n--){
            if(x%9==0) {add++;
            x=1;
            }
            result += add;
            x++;
        }
        return result;
    }
};