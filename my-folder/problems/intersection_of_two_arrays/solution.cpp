class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y = nums2.size();
        std::unordered_set<int> st1;
        std::unordered_set<int> st2;
        for (int i = 0; i < x; i++) {
            st1.insert(nums1[i]);
        }
        for (int i = 0; i < y; i++) {
            st2.insert(nums2[i]);
        }
        std::vector<int> distinct1;
        std::vector<int> distinct2;
        std::vector<int> result;
        for (auto it1 : st1) {
            distinct1.push_back(it1);
        }
        for (auto it1 : st2) {
            distinct2.push_back(it1);
        }
        int a = distinct1.size();
        int b = distinct2.size();
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (distinct1[i] == distinct2[j]) {
                    result.push_back(distinct1[i]);
                    break;
                }
            }
        }
        return result;
    }
};