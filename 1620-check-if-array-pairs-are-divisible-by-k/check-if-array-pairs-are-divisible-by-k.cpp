class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            int ele=((arr[i]%k)+k)%k;
            mp[ele]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0) return false;
            mp.erase(0);
        }
        for(auto x: mp){
            int a=x.first;
            if(mp.find(k-a)==mp.end()) return false;
            if(mp[k-a]!=mp[a]) return false;
        }
        return true;
    }
};