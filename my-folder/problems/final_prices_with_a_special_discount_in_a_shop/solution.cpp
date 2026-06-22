class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> answer(prices);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(prices[i]>=prices[j]) {answer[i] -= prices[j];
            break;}
        }
    }
    return answer;
    }
};