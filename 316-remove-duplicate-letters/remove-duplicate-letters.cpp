class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp;
        for(auto ch: s){
            mp[ch]++;
        }
        vector<bool> visited(26,0);
        stack<char> st;
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            if(visited[s[i]-'a']) continue;
            while(st.size() && st.top()>s[i] && mp[st.top()]>0){
                visited[st.top()-'a']=0;
                st.pop();
            }
            st.push(s[i]);
            visited[s[i]-'a']=true;
        }
        string ans="";
        while(st.size()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};