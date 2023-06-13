class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> ans(n, -1);
        stack<long long> vec;
        vec.push(-1);
        
        for (int i = 0; i < n; i++)
        {
            while (vec.top() != -1 && arr[vec.top()] < arr[i])
            {
                ans[vec.top()] = arr[i];
                vec.pop();
            }
            vec.push(i);
        }
        
        return ans;
    }
};