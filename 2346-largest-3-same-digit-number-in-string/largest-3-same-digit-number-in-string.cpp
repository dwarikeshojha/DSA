class Solution {
public:
    string largestGoodInteger(string num) {
        int preidx=0;
        int endidx=-1;
        string ans="";
        for(int i=1;i<num.size();i++){
            if(num[i]==num[i-1]) continue;
            else{
                if(i-preidx>=3){
                string a=num.substr(preidx,3);
                ans=max(ans,a);
                }
                preidx=i;
            }
        }
        if(num.length()-preidx>=3){
            string a=num.substr(preidx,3);
            ans=max(ans,a);
        }
        return ans;
    }
};