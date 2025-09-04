class Solution {
public:
    int findClosest(int x, int y, int z) {
        int c1=abs(x-z);
        int c2=abs(z-y);
        if(c1<c2) return 1;
        else if(c1>c2) return 2;
        else return 0;
    }
};