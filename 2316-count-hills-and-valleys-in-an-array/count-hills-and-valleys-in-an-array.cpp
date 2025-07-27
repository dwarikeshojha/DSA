class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int j=1;
        int count=0;
        while(j<nums.size()-1){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }
            int k=j+1;
            while(k<nums.size() && nums[k]==nums[j]) k++;
            if(k>=nums.size()) break;
            int i=j-1;
            while(i>=0 && nums[j]==nums[i]) i--;
            if(i<0){
                j++;
                continue;
            }
            if((nums[j]>nums[i] && nums[j]>nums[k]) || (nums[j]<nums[i] && nums[j]<nums[k])){
                count++;
            }
            if(count<0) count=0;
            j++;
        }
        return count;
    }
};