
class Solution {
public:
bool isPossi(vector<int> &stalls, int k,int mid,int n){
       int cows=1; int stall=stalls[0];
       for(int i=0;i<n;i++){
           if(stalls[i]-stall>=mid){
               cows++;
               if(cows==k){
               return true;
           }
           stall=stalls[i];
           }
           
       }
       return false;
   }

    int solve(int n, int k, vector<int> &stalls) {
      sort(stalls.begin(),stalls.end());
      int s=0;
      int e=stalls[n-1]-stalls[0];
      int ans=-1;
      while(s<=e){
          int mid=s+(e-s)/2;
          if(isPossi(stalls,k,mid,n)){
              ans=mid;
              s=mid+1;
          }
          else{
              e=mid-1;
          }
      }
      return ans;
    }
};