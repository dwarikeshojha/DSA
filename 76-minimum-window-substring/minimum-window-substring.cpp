class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        unordered_map<char,int> mp;
        for(char &ch : t){
            mp[ch]++;
        }
        int count=t.size();
        int i=0,j=0;
        int windsize=INT_MAX;
        int start_i=0;
        while(j<s.size()){
            char ch=s[j];
            if(mp[ch]>0) count--;
            mp[ch]--;

            while(count==0){
                int currsize=j-i+1;
                if(windsize>currsize){
                    windsize=currsize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0) count++;
                i++;
            }
            j++; 
        }
        return (windsize==INT_MAX) ? "" : s.substr(start_i,windsize);
    }
};