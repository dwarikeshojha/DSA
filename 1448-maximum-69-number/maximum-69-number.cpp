class Solution {
public:
    int f(string s){
        int ans=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]!='9'){
                s[i]='9';
                break;
            } 
        }
        return stoi(s);
    }
    int maximum69Number (int num) {
        string s=to_string(num);
        return (f(s));        
    }
};