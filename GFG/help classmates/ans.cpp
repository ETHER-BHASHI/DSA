class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    {   stack<int>vec;
       vector<int>ans(n,-1);
       vec.push(-1);
       for(int i=0;i<n;i++){
           while(vec.top()!=-1 && arr[vec.top()] > arr[i]){
                 ans[vec.top()] = arr[i];
                vec.pop();
           }
           vec.push(i);
       }
       return ans;
    } 
};