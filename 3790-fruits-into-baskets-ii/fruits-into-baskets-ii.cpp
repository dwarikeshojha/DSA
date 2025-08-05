class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(baskets[j]!=0 && fruits[i]<=baskets[j]){
                    baskets[j]=0;
                    break;
                }
            }
        }
        int count=0;
        for(auto x: baskets){
            if(x==0) count++;
        }
        return n-count;
    }
};