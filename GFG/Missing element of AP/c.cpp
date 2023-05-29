class Solution{   
public:
    int findMissing(int arr[], int n) {
        int high=n-1;
        int low=0;
        int d=(arr[n-1]-arr[0])/n;
        while(low<high){
            //cout<<"h";
            int mid=low+(high-low)/2;
            if(arr[mid+1]-arr[mid]!=d){
                return arr[mid]+d;
                
            }
            if(arr[mid]-arr[mid-1]!=d){
                return arr[mid-1]+d;
            }
            if(mid > 0 && arr[mid]==arr[0]+ mid*d){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return 0;
        
    }
};