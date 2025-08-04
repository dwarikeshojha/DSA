class Solution {
public:
    int help(vector<int>&c,vector<int>&dp,int i){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = c[i] + min(help(c,dp,i-1),help(c,dp,i-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(help(cost,dp,n-1),help(cost,dp,n-2));
    }
};