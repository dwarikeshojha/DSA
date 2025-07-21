class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int count=1;
        for(int i=1;i<s.size();i++){
            if(count==2){
                while(i<s.size() && s[i]==s[i-1]) i++;
                count=1;
                if(i==s.size()) break;
                // if(s[i]!=s[i-1]){
                //     ans+=s[i];
                //     count=1;
                //     continue;
                
            }
            else if(s[i]==s[i-1]) count++;
            if(count<3)ans+=s[i];
        }
        return ans;
    }
};