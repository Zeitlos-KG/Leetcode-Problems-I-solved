class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long mini = LLONG_MAX;
        mini = min(need1*cost1 + need2*cost2, mini);
        mini = min(max(need1, need2)*costBoth, mini);
        if(need1<need2) {
            mini = min(need1*costBoth + (need2-need1)*cost2, mini);
        }
        else{
            mini = min(need2*costBoth + (need1-need2)*cost1, mini);
        }
        return mini;
    }
};
