class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=0;i<a.size();i++){
            bool fl=true;
            while(st.size()>0 && (st.top()>0 && a[i]<0) ){
                if(abs(a[i])>st.top()){
                    st.pop();
                    //st.push(a[i]);
                    fl=true;
                }
                else if(st.top()==abs(a[i])){
                    st.pop();
                    fl=false;
                    break;
                }
                else{
                    fl=false;
                    break;
                }

            }
            if(fl) st.push(a[i]);
        }
        vector<int> ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};