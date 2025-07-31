class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count=1;
        int n=intervals.size();
        vector<int> last=intervals[0];
        for(int i=1;i<n;i++){
            vector<int> curr=intervals[i];
            if(last[1] >= curr[0]){
                last[1]=min(last[1],curr[1]);
            }
            else{
                last=intervals[i];
                count++;
            }
        }
        return count;
    }
};