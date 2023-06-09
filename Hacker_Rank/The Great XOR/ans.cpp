long theGreatXor(long x) {
    long c=0;
    long t=x;
    while(x>0){
        x=x>>1;
        c++;
    }
    long ans=pow(2,c)-1;
return ans-t;
}
