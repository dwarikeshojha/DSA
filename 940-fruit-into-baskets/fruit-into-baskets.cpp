class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n=f.size();
        unordered_map<int,int> mp;
        int i=0;
        int j=0;
        int ans=0;
        while(j<n){
            mp[f[j]]++;
            if(mp.size()>2){
                while(mp.size()>2){
                    mp[f[i]]--;
                    if(mp[f[i]]==0) mp.erase(f[i]);
                    i++;
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};