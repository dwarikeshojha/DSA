class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<char,int>> pq;
        for(auto p: mp){
            pq.push(p);
        }
        string res="";
        while(pq.size()){
            auto largest=pq.top();
            pq.pop();
            int len=min(repeatLimit,largest.second);
            for(int i=0;i<len;i++){
                res+=largest.first;
            }
            pair<char,int> slargest;
            if(largest.second - len > 0){
                if(!pq.empty()){
                    slargest=pq.top();
                    pq.pop();
                    res+=slargest.first;
                }
                else return res;
            
                if(slargest.second - 1 > 0) pq.push({slargest.first,slargest.second-1});
                pq.push({largest.first,largest.second-len});
            }
        }
        return res;
    }
};