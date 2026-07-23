class Solution {
public:
    int minTimeToType(string word) {
       int sum = word.size(); 
       int n = word.size();
       for(int i=0;i<n-1;i++){
        int x = abs(word[i+1]-word[i]);
        sum += min(x, 26-x);
       }
       if(word[0] == 'a') return sum;
       else return sum+min(abs(word[0]-'a'), 26-abs(word[0]-'a'));
    }
};