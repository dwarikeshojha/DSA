class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(int i=0;i<answers.size();i++){
            mp[answers[i]]++;
        }
        int ans=0;
        for(auto x : mp){
            int a=x.first;
            if(a!=0){
                while(x.second > x.first+1){
                    ans+=1+x.first;
                    x.second-=x.first+1;
                }
                ans+=1+x.first;
            }
            else ans+=x.second;
        }
        return ans;
    }
};