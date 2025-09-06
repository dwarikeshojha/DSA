class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        // vector<int> nge(n,-1);
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && nums2[i]>=nums2[st.top()]) st.pop();
            if(st.size()>0) mp[nums2[i]]=nums2[st.top()];
            else mp[nums2[i]]=-1;
            st.push(i);
        }
        int n1=nums1.size();
        vector<int> ans(n1);
        for(int i=0;i<n1;i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;

    }
};