class Solution {
public:
    vector<int> dp;
    int f(int n){
        if(n==0 || n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        for(int k=1;k<=n;k++){
            ans+=f(k-1)*f(n-k);
        }
        return dp[n]=ans;
    }
    int numTrees(int n) {
        dp.clear();
        dp.resize(30,-1);
        return f(n);
    }
};