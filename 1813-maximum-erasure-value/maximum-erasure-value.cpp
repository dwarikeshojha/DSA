class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int msum=0;
        int sum=0;
        unordered_set<int> s;
        int j=0,i=0;
        while(j<nums.size()){
            if(s.find(nums[j])!=s.end()){
                msum=max(msum,sum);
                while(i<nums.size() && nums[i]!=nums[j]){
                    sum-=nums[i];
                    s.erase(nums[i]);
                    i++;
                }
                sum-=nums[i];
                s.erase(nums[i]);
                i++;
            }
            s.insert(nums[j]);
            sum+=nums[j];
            j++;
        }
        return max(msum,sum);
    }
};