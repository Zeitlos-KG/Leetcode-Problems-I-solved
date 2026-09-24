class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = prices.size();
        int profit = 0;
        bool hold = false;
        int bought = 0;
        for(int i=0;i<x-1;i++){
            if(prices[i]>bought && hold==true){
                profit+=(prices[i]-bought);
                bought = 0;
                hold = false;
            }
            if(prices[i]<prices[i+1] && hold==false) {
                bought = prices[i];
                hold = true;
                if(i==x-2) profit+=prices[i+1]-prices[i];
            }
        }
        return profit;
    }
};
