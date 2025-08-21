class Solution {
public:
    int maxele(int n){
        int m=INT_MIN;
        if(n<=9) return n;
        int size=0;
        while(n>0){
            if(m<(n%10)) m=n%10;
            size++;
            n/=10;
        }
        string s="";
        for(int i=0;i<size;i++){
            s+=to_string(m);
        }
        return stoi(s);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=maxele(nums[i]);
        }
        return sum;
    }
};