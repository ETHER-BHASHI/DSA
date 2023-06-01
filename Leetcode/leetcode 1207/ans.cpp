class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>count;
        for(int i=0;i<n;){
           int  c=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    c++;
                }
            }
            count.push_back(c);
            i+=c;
        }
        sort(count.begin(),count.end());
        for(int i=0;i<count.size()-1;i++){
            if(count[i]==count[i+1]){
                return false;
                }
            
        }
        return true;
    }
};