class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int nge[n];
        nge[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i]=max(nge[i+1],prices[i]);
        }
        int maxprofit=INT_MIN;

        for(int i=0;i<n;i++){
            maxprofit=max(maxprofit,nge[i]-prices[i]);
        }
        return maxprofit;
    }
};