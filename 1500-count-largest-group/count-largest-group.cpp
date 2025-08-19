class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>> mp;
        while(n>0){
            int x=n;
            if(x<=9) mp[x].push_back(x);
            else{
                int p=0;
                int q=x;
                while(x>0){
                    p+=x%10;
                    x/=10;
                }
                mp[p].push_back(q);
            }
            n--;
        }
        int size=0;
        for(auto m: mp){
            if(m.second.size()>size) size=m.second.size();
        }
        int ans=0;
        for(auto m: mp){
            if(m.second.size()==size) ans++;
        }
        return ans;
    }
};