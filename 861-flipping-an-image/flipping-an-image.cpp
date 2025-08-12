class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j){
                image[k][i]=!image[k][i];
                if(i!=j)image[k][j]=!image[k][j];
                swap(image[k][i],image[k][j]);
                i++;
                j--;
            }
        }
        return image;
    }
};