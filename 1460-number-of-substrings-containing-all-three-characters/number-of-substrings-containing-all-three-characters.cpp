class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        vector<int> f(3,0);
        int i=0,j=0,count=0,ans=0;
        while(j<n){
            f[s[j]-'a']++;
            while(f[0]!=0 && f[1]!=0 && f[2]!=0){
                ans+=(n-j);
                f[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return ans;
    }
};