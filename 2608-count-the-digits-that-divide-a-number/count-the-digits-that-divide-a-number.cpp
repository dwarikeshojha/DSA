class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int x=num;
        if(x<=9) return 1;
        while(x>0){
            if(num%(x%10)==0) count++;
            x/=10;
        }
        return count;
    }
};