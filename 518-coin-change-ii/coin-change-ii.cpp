class Solution {
public:
    int change(int a, vector<int>& coins) {
        int n=coins.size();
        using u128 = unsigned __int128;
        vector<u128> dp(a+1,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=coins[i];j<=a;j++){
                dp[j]+=dp[j-coins[i]];
            }
        }
        return (int)dp[a];
    }
};