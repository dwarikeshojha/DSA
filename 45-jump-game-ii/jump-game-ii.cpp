class Solution {
public:
    vector<int> dp;
    int f(vector<int>&nums,int i,int n){
        if(i==n-1) return 0;
        if(i>=n) return INT_MAX;
        if(dp[i]!=-1) return dp[i];
        int steps=INT_MAX;
        for(int j=1;j<=nums[i];j++){
            steps=min(steps,f(nums,i+j,n));
        }
        return dp[i]=(steps==INT_MAX) ?INT_MAX : 1+steps;
    }
    int jump(vector<int>& nums) {
        dp.clear();
        dp.resize(nums.size(),-1);
        return f(nums,0,nums.size());
    }
};