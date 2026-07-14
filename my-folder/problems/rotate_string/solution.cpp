class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size()<s.size()) return false;
         s+=s;
         size_t position = s.find(goal);
         if(position!=string::npos) return true;
         else return false;
    }
};