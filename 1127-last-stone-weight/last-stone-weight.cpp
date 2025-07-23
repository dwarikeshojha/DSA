class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int bada=pq.top();
            pq.pop();
            int chota=pq.top();
            pq.pop();
            if(bada-chota==0) continue;
            else pq.push(bada-chota);
        }
        if(pq.size()==0) return 0;
        else return pq.top();
    }
};