class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n=nums.size();
        int len=1;
        unordered_set<int>s;
        for(auto i:nums ){
            s.insert(i);
        }
        for(auto i:nums){
            if(s.find(i)==s.end()){
                continue;
            }
            s.erase(i);
            int prev=i-1;
            int next=i+1;

            while(s.find(prev)!=s.end()){
                s.erase(prev);
                prev--;
            }
            while(s.find(next)!=s.end()){
                s.erase(next);
                next++;
            }
            len=max(len,next-prev-1);
        }
        return len;
    }
};