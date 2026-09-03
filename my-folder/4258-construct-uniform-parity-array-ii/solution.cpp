class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int x = nums1.size();
        sort(nums1.begin(), nums1.end());
        int smallestOdd = 0;
        for (auto it : nums1) {
            if (it % 2 != 0)
                smallestOdd = it;
            break;
        }

        if (nums1[0] % 2 == 0) {
            vector<int> evens;
            for (int i = 0; i < x; i++) {
                if (nums1[i] % 2 == 0)
                    evens.push_back(nums1[i]);
                else {
                    if (smallestOdd != 0 && nums1[i] - smallestOdd >= 1)
                        evens.push_back(nums1[i] - smallestOdd);
                }
            }
            if (evens.size() == nums1.size())
                return true;
            vector<int> odds;
            for (int i = 0; i < x; i++) {
                if (nums1[i] % 2 != 0)
                    odds.push_back(nums1[i]);
                else {
                    if (smallestOdd != 0 && nums1[i] - smallestOdd >= 1)
                        odds.push_back(nums1[i] - smallestOdd);
                }
            }
            if (odds.size() == nums1.size())
                return true;
            return false;
        } else {
            vector<int> odds;
            for (int i = 0; i < x; i++) {
                if (nums1[i] % 2 != 0)
                    odds.push_back(nums1[i]);
                else {
                    if (smallestOdd != 0 && nums1[i] - smallestOdd >= 1)
                        odds.push_back(nums1[i] - smallestOdd);
                }
            }
            if (odds.size() == nums1.size())
                return true;

            vector<int> evens;
            for (int i = 0; i < x; i++) {
                if (nums1[i] % 2 == 0)
                    evens.push_back(nums1[i]);
                else {
                    if (smallestOdd != 0 && nums1[i] - smallestOdd >= 1)
                        evens.push_back(nums1[i] - smallestOdd);
                }
            }
            if (evens.size() == nums1.size())
                return true;
            return false;
        }
    }
};
