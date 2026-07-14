class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string result = "";
        while (n != 0) {
            string lastEle = num.substr(n - 1, 1);
            if (stoi(lastEle) % 2 != 0) {
                result = num;
                break;
            }
            num.pop_back();
            n--;
        }
        return result;
    }
};