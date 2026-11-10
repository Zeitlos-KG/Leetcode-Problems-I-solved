class Solution {
public:
    int daysReq(vector<int>& weights, int mid){
        int dates = 0;
        int n = weights.size();
        for(int i=0;i<n;){
            int sum = weights[i];
            i++;
            while(i<n){
                if(sum+weights[i]<=mid){
                    sum+=weights[i];
                    i++;
                }
                else break;
            }
            dates++;
        }
        return dates;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int w = weights.size();
        auto it = max_element(weights.begin(), weights.end());
        int low = *it;
        int high = 0;
        for(int i=0;i<w;i++){
            high+=weights[i];
        }
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(daysReq(weights, mid)<=days){
                high = mid-1;
                ans = mid;
            }
            else low=mid+1;
        }
        return ans;
    }
};
