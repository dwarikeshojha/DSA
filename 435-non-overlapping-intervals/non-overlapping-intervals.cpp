class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count=0;
        int n=intervals.size();
        vector<int> last=intervals[n-1];
        for(int i=n-2;i>=0;i--){
            vector<int> curr=intervals[i];
            if(last[0] < curr[1]){

                count++;
            }
            else{
                last=intervals[i];
            }
        }
        return count;
    }
};