class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int x = n/3;
        vector<int> copy(piles);
        sort(copy.begin(),copy.end());
        vector<int> empty;
        for(int i=0;i<x;i++){
            empty.push_back(copy[(n-1)-(i*2)]);
            empty.push_back(copy[(n-2)-(i*2)]);
            empty.push_back(copy[i]);
        }
        int sum = 0;
            for(int i=1;i<n;i+=3){
                sum+=empty[i];
            }
            return sum;
    }//1 2 2 4 7 8
};