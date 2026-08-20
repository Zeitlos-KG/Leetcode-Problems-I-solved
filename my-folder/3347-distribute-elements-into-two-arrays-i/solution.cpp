class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        int n = nums.size();
        int last1 = nums[0];
        int last2 = nums[1];
        nums1.push_back(nums[0]);
        nums2.push_back(nums[1]);
        for (int i = 2; i < n; i++) {
            if (last1 > last2) {
                nums1.push_back(nums[i]);
                last1 = nums[i];
            } else {
                nums2.push_back(nums[i]);
                last2 = nums[i];
            }
        }
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            result.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            result.push_back(nums2[i]);
        }
        return result;
    }
};
