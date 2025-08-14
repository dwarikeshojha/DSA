class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto ch : s){
            mp[ch]++;
        }
        int ans=0;
        bool fl=true;
        if(mp.size()==1) return mp[s[0]];
        for(auto x : mp){
            if(x.second==1){
                if(fl==true && (ans%2==0)){
                    ans+=1;
                    fl=false;
                }
            }
            else if(x.second%2==0) ans+=x.second;
            else{
                if(ans%2==0)ans+=x.second;
                else ans+=x.second-1;
            }
        }
        return ans;
    }
};