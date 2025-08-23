class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long count=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int t=nums[i]+nums[j];
            if(t<target){
                count+=j-i;
                i++;
            }
            else if(t>=target) j--;
        }
        return count;
    }
};