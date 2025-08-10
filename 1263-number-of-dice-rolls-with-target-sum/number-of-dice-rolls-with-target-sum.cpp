#define  mod 1000000007
class Solution {
public:
    vector<vector<int>> dp;
    int f(int n,int k,int t){
        if(n==0 and t==0) return 1;
        if(n==0) return 0;
        if(dp[n][t]!=-1) return dp[n][t];
        int sum=0;
        for(int i=1;i<=k;i++){
            if(t-i < 0) continue;
            sum=((sum%mod)+(f(n-1,k,t-i)%mod))%mod;
        }
        return dp[n][t]=sum % mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(n+1,vector<int>(target+1,-1));
        return f(n,k,target);
    }
};