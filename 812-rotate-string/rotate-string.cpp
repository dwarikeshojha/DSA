class Solution {
public:
    void rev(string &s){
        reverse(s.begin(),s.end()-1);
        reverse(s.begin(),s.end());
    }
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            if(s==goal) return true;
            else rev(s);
        }
        return s==goal;
    }
};