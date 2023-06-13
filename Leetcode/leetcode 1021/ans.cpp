class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int bb=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' && bb++>0){
                str+=s[i];
            }
            else if (s[i]==')' && bb-->1){
                    str+=s[i];
            }
        }
        return str;
    }
};