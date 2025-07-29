class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x : nums){
            pq.push(x);
        }
        while(k>0){
            if(pq.top()==0) break;
            int x=pq.top()*(-1);
            pq.pop();
            pq.push(x);
            k--;
        }
        int sum=0;
        while(pq.size()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};