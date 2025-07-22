class Solution {
public:
    typedef pair<int,int> pp;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        for(auto x : mp){
            int key=x.first;
            int freq=x.second;
            pq.push({freq,key});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};