class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits;
        int temp = num;
        while(temp!=0){
            digits.push_back(temp%10);
            temp/=10;
        }
        int x = digits.size();
        for(int i=x-1;i>=0;i--){
            if(digits[i]==6) {
                num += 3*pow(10,i);
                break;
            }
        }
        return num;
    }
};