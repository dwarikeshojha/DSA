class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,maxlen=0,maxfreq=0;
        int n=s.size();
        vector<int> f(26,0);
        while(j<n){
            f[s[j]-'A']++;
            maxfreq=max(maxfreq,f[s[j]-'A']);
            if((j-i+1)-maxfreq > k){
                f[s[i]-'A']--;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,f[i]);
                }
                i++;
            }
            if((j-i+1)-maxfreq <= k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};