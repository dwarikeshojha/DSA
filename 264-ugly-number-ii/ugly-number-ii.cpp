class Solution {
public:
    int nthUglyNumber(int n) {
        long x=1;
        set<long> s;
        s.insert(x);
        for(int i=0;i<n;i++){
            x=*s.begin();
            s.erase(x);
            s.insert(x*2);
            s.insert(x*3);
            s.insert(x*5);
        }
        return x;
    }
};