class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int msum=INT_MIN;
        int csum=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==1){
                csum+=nums[i];
                msum=max(msum,csum);
                if(csum<0 || csum<msum) csum-=nums[i];
            }
        }
        return msum;
    }
};