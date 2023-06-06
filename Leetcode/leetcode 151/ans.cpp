class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.length();
        string str;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
           
            if(str.length()==0){
                str= s.substr(i,j-i);
            }
            else{
                str=s.substr(i,j-i) +" "+ str;
            }
            i=j+1;
        }
        return str;
    }
};