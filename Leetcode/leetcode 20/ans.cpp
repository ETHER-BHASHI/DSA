class Solution {
public:
    bool isValid(string s) {
        int str=s.size();
        vector<int>stack;
        for(int i=0;i<str;i++){
            if(s[i]=='(' ||s[i]=='{' ||s[i]=='[' ){
                    stack.push_back(s[i]);
            }
            else{
                if(stack.empty()==1){return false;}
                if(s[i]==')'  && stack.back()!='('){
                    return false;
                }
                else if (s[i]==']'  && stack.back()!='['){
                   return false;
                }
                else if(s[i]=='}'  && stack.back()!='{'){
                    return false;
                }
                else{
                   stack.pop_back();
                }
            }
        }
        if(stack.empty()!=1){return false;}
        else{
            return true;
        }
    }
};