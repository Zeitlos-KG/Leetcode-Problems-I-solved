class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int o = order.size();
        int f = friends.size();
        vector<int> result;
        for(int i=0;i<o;i++){
            for(int j=0;j<f;j++){
                if(order[i]==friends[j]) {result.push_back(order[i]);
                break;}
            }
        }
        return result;
    }
};