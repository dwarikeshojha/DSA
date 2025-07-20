class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //changing the array 
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        unordered_map<int,int> mp;
        mp[0]++;
        int oddcount=0;
        int ans=0;
        for(int x: nums){
            oddcount+=x;
            if(mp.find(oddcount-k)!=mp.end()) ans+=mp[oddcount-k];
            mp[oddcount]++;
        }
        return ans;
    }
};