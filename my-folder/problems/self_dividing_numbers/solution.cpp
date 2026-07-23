class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            int count = 0;
            int copy1 = i;
            int copy2 = i;
            while(copy1!=0){
                copy1/=10;
                count++;
            }
            int count2 = 0;
            while(copy2!=0){
                int digit = copy2%10;
                if(digit == 0) break;
                if(i%digit != 0) break;
                else {count2++;
                copy2/=10;}
            }
            if(count == count2) result.push_back(i);
        }
        return result;
    }
};