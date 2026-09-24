class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int max = 0;
        while(left<=right){
            int x = min(height[left], height[right]);
            int product = x*(right-left);
            if(product > max) max = product;
            if(height[left]<height[right]) left++;
            else{right--;}
        }
        return max;
    }
};
