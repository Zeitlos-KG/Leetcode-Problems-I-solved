class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> mpp;
        for (char it : s) {
            mpp[it]++;
        }
        string front = "";
        string mid = "";
        string back = "";
        for (auto it : mpp) {
            int x = it.second;
            int temp = x;
            if (x % 2 != 0) {
                mid += it.first;
                x--;
                while (x != (temp) / 2) {
                    front += it.first;
                    back += it.first;
                    x--;
                }
            } else {
                while (x != temp / 2) {
                    front += it.first;
                    back += it.first;
                    x--;
                }
            }
        }
        sort(front.begin(), front.end());
        sort(back.begin(), back.end(), greater<int>());
        return front + mid + back;
    }
};