class Solution {
public:
    char findTheDifference(string s, string t) {
        int l=0;
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            l^=s[i]^t[j];
            i++;j++;
        }
        while(j<t.size()){
            l^=t[j];
            j++;
        }
        return (char)l;
    }
};