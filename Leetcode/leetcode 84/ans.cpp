class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int s=h.size();
        stack<int>stk;
        stk.push(-1);
        int area=0;
        for(int i=0;i<s;i++){
            while(stk.top()!=-1 && h[stk.top()]>=h[i]){
                  int hei=h[stk.top()];
                  stk.pop();
                  int w=i-stk.top()-1;
                  area=max(area,hei*w);
            }
            stk.push(i);
        }
        while(stk.top()!=-1){
            int hei=h[stk.top()];
            stk.pop();
            int w=s-stk.top()-1;
            area=max(area,hei*w);
        }
        return area;
    }
};