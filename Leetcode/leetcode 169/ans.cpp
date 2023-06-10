class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<s;i++){
           mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>s/2){return i.first;}
        }
        return 0;
    }
    
};