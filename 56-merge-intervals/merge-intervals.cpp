class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int> curr=intervals[i];
            if(res[res.size()-1][1] >= curr[0]){
                res[res.size()-1][0]=min(res[res.size()-1][0],curr[0]);
                res[res.size()-1][1]=max(res[res.size()-1][1],curr[1]);
            }
            else{
                res.push_back(curr);
            }
        }
        return res;
    }
};