class Solution {
public:
    typedef pair<int,pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pip,vector<pip>,greater<pip>> pq;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int min=pq.top().first;
        int end=mx,start=min;
        while(true){
            // min=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            if(col==nums[row].size()-1) break;
            pq.push({nums[row][col+1],{row,col+1}});
            mx=max(mx,nums[row][col+1]);
            min=pq.top().first;
            if(mx-min < end-start){
                end=mx;
                start=min;
            }

        }
        return {start,end};
    }
};