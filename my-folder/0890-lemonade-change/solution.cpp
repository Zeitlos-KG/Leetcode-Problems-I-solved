class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        int twenties = 0;
        for(auto it: bills){
            if(it==5) fives++;
            else if(it==10) {
                if(fives>=1) {tens++;
                fives--;}
                else return false;
            }
            else if(it==20){
                if(tens>=1 && fives>=1){
                    twenties++;
                    tens--;
                    fives--;
                }
                else if (fives>=3){
                    fives-=3;
                    twenties++;
                }
                else return false;
            }
        }
        return true;
    }
};
