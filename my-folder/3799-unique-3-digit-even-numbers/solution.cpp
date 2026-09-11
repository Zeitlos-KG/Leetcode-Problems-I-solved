class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> all;
        sort(digits.begin(), digits.end());
        do{
            if(digits[2]%2!=0) continue;
            else{
            int num = digits[2] + digits[1]*10 + digits[0]*100;
            if(num>=100 && num<=999 && num%2==0) all.insert(num);
            }
    }
        while(next_permutation(digits.begin(), digits.end()));
        return all.size();
    }
};
