class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j = jewels.size();
        int s = stones.size();
        multiset<char> st;
        for(int i=0;i<s;i++){
            st.insert(stones[i]);
        }
        int count = 0;
        for(int i=0;i<j;i++){
            count += st.count(jewels[i]);
        }
        return count;
    }
};