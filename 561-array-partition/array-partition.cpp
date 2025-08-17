class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        int j=i-1;
        int ans=0;
        while(j>=0){
            ans+=min(nums[i],nums[j]);
            i-=2;
            j-=2;
        }
        return ans;
    }
};