class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int filter=0;
        if(m==0){
           return 1;
        }
        while(n!=0){
            filter=(filter<<1)|1;
            n=n>>1;
        }
        int c=(~m)&filter;
        return c;
    }
};