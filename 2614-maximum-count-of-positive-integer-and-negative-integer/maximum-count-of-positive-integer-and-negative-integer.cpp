class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int negidx=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]<0){
                negidx=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        i=0;
        j=nums.size()-1;
        int posidx=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>0){
                posidx=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        if(posidx==-1 && negidx==-1) return 0;
        if(posidx!=-1)posidx=nums.size()-posidx;
        if(negidx!=-1)negidx=negidx+1;
        return max(posidx,negidx);
    }
};