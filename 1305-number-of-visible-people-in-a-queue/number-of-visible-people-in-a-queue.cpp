class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        stack<int> st;
        int n=h.size();
        st.push(n-1);
        vector<int> ans(n,0);
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(st.size() && h[st.top()]<=h[i]){
                count++;
                st.pop();
            }
            if(st.size()) count++;
            ans[i]=count;
            st.push(i);
        }
        return ans;
    }
};