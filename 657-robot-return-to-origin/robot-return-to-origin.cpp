class Solution {
public:
    bool help(string &s,int i,int j,int idx){
        if(idx==s.size()){
            if(i==0 && j==0) return true;
            else return false;
        }
        if(s[idx]=='U') return help(s,i-1,j,idx+1);
        else if(s[idx]=='D') return help(s,i+1,j,idx+1);
        else if(s[idx]=='L') return help(s,i,j-1,idx+1);
        else return help(s,i,j+1,idx+1);
    }
    bool judgeCircle(string moves) {
        return help(moves,0,0,0);
    }
};