class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        vector<bool>prime(n+2,true);
        prime[0]=prime[1]=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                c++;
                for(int j=i*2;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return c;
    }
};