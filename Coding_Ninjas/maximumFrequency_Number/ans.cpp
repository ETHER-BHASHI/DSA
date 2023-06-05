int maximumFrequency(vector<int> &arr, int n)
{   int maxfre=0;
    unordered_map<int, int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        maxfre=max(maxfre,m[arr[i]]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(maxfre==m[arr[i]]){
            ans=arr[i];
            break;
        }
    }
    return ans;
}