class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<int>stk;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
               stk.push(s[i]);
            }
            else {
                if(stk.empty()==1 || stk.top()==')'){
                    stk.push(s[i]);
                }
             else{stk.pop();}
            }
        }
        return stk.size();
    }
};