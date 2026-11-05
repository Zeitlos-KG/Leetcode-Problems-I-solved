class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int x = arr1.size();
        int y = arr2.size();
        int ans = 0;
        for(int i=0;i<x;i++){
            int a = 0;
            for(int j=0;j<y;j++){
                if(abs(arr1[i]-arr2[j])>d) a++;
                else break;
            }
            ans+=a/y;
        }
        return ans;
    }
};
