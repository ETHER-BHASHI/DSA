class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    
	    unordered_map<int,int>mp;
	    int len=0;
	    
        int n=nums.size();
	    int sum=0;
        int c=0;
	   mp[0]=1;
	    for(int i=0; i<n;i++){
	        sum+=nums[i];
	        
	        int Sum=(sum%k +k)%k;
	        if (mp.find(Sum)!=mp.end()){
                c+=mp[Sum];
	        }
	        mp[Sum]++;
	    }
	    return c;
        
    }
};