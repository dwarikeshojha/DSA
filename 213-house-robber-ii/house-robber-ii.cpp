class Solution {
public:
    int f(vector<int>&nums,int i,int j){
        int sec=nums[j];
        int first=max(nums[j-1],sec);
        for(int k=j-2;k>=i;k--){
            int curr=max(nums[k]+sec,first);
            sec=first;
            first=curr;
        }
        return first;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]); 
        int left=f(nums,0,n-2);
        int right=f(nums,1,n-1);
        return max(left,right);
    }
};