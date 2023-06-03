
class Solution 
{
    public:
    bool ispossi(int A[],int n, int m, int mid){
        int page=0;int student=1;
        for(int i=0;i<n;i++){
            if(page+A[i]<=mid){
                page+=A[i];
            }
            else{
                student++;
                if(student>m || A[i]>mid){
                    return false;
                }
                page=A[i];
            }
        }
        return true;
    }
    
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(N<M){
            return -1;
        }
        int s=0;
        int sum=0;
        int ans=-1;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossi(A,N,M,mid)){
                ans=mid;
                e=mid-1;  
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};