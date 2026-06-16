class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = nums.size();
        int pos = 0;
        int neg = 1;
        vector<int> r(x);
        for (int i = 0; i < x; i++) {
            if (nums[i] < 0) {
                r[neg] = nums[i];
                neg += 2;
            } else {
                r[pos] = nums[i];
                pos += 2;
            }
        }
        return r;
    }
};