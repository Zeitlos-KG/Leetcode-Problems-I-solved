class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
    int digitMax;
    int digitMin;
    int copySum = sum;
    if(num == 1 && sum<=9) return to_string(sum);
      if(sum<=9)   {digitMax = sum;
      digitMin = 0;}
      else {digitMax = 9;
      while(copySum>=9){
        copySum-=9;
      }
      digitMin = copySum;
      }
      string ans = "";
      int suma = 0;
      string digiMax = to_string(digitMax);
    while(suma <= sum-digitMax){
        suma+=digitMax;
        ans+=digiMax;
    }
    ans+=to_string(digitMin);
    int x = ans.size();
    if(x<num){
        for(int i=0;i<num-x;i++){
            ans+='0';
        }
    }
    x = ans.size();
    if(x==num) {
        return ans;
    }
    else if ((x==num+1 && ans[x-1]=='0')) {
        ans.pop_back();
        return ans;
    }
    else return "";
    }
};
