class Solution {
public:
    long long sumAndMultiply(long long copy) {
        long long sum = 0;
        long long y = 0;
        vector<long long> result;
        while(copy!=0){
            long long digit = copy%10;
            sum+= digit;
            if(digit!=0) result.push_back(digit);
            copy/=10;
        }
        int x = result.size();
        for(int i=0;i<x;i++){
            y += result[i]*pow(10,i);
        }
        return y*sum;
    }
};