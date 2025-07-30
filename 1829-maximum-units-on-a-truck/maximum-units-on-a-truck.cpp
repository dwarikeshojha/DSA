class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        int r1=a[1];
        int r2=b[1];
        return r1>r2;
    }
    int maximumUnits(vector<vector<int>>& b, int tsize) {
        sort(b.begin(),b.end(),cmp);
        int ans=0;
        for(int i=0;i<b.size();i++){
            if(b[i][0] <= tsize){
                ans+=b[i][0]*b[i][1];
                tsize-=b[i][0];
            }
            else{
                ans+=(tsize*b[i][1]);
                break;
            }
        }
        return ans;
    }
};