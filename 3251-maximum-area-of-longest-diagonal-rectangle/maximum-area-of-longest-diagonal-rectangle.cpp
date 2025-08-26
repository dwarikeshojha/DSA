class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int tt=0;
        int ans=0;
        for(int i=0;i<d.size();i++){
            int l = d[i][0];
            int b = d[i][1];
            int diag = l*l+b*b; 
            int area = l*b;
            
            if (diag > tt || (diag == tt && area > ans)) {
                tt = diag;
                ans = area;
            }
        }
        return ans;
    }
};