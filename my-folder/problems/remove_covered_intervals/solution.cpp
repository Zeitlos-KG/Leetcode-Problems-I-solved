class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    int x = intervals.size();
    int count = x;
    int y;
    vector<int> iIndex;
    vector<int> jIndex;
    for(int i=0;i<x;i++){
        iIndex.push_back(intervals[i][0]);
        jIndex.push_back(intervals[i][1]);
    }
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
        if(iIndex[i]>=iIndex[j] && jIndex[i]<=jIndex[j]) {count--; 
        break;}
        if(iIndex[i]<=iIndex[j] && jIndex[i]>=jIndex[j]) {
        swap(iIndex[i],iIndex[j]);
        swap(jIndex[i],jIndex[j]);
        count--;
        break;}
    }
    }
    return count;
    }
};