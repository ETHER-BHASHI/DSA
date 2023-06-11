
pair<long long, long long> getMinMax(long long a[], int n) {
   // int n=a.size();
    long long mini=LLONG_MAX;
    long long maxi=LLONG_MIN;
    pair <long long,long long>ans;
    for(int i=0;i<n;i++){
        if(maxi<a[i]) maxi=a[i];
        
    }
    for(int i=0;i<n;i++){
       if(mini>a[i]) mini=a[i];
    }
    ans.first=mini;ans.second=maxi;
    return ans;
    
}