class Solution {
public:
    string reversePrefix(string s, char ch) {
       int idx=-1;
       for(int i=0;i<s.size();i++){
            if(ch==s[i]){
            idx=i;
            break;
            }
       }
       if(idx!=-1) reverse(s.begin(),s.begin()+idx+1);
       return s;
    }
};