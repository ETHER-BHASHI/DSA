class Solution {
public:
 int firstOcc(vector<int>& nums, int target){
     int n=nums.size();
     int low=0;
     int ans=-1;
     int high=n-1;
     while(low<=high){
         int mid=low+(high-low)/2;
         if(nums[mid]==target){
             ans=mid;
             high=mid-1;
         }
         else if(nums[mid]<target){
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return ans;
 }
 int lastOcc(vector<int>& nums, int target){
     int n=nums.size();
     int low=0;
     int ans=-1;
     int high=n-1;
     while(low<=high){
         int mid=low+(high-low)/2;
         if(nums[mid]==target){
             ans=mid;
             low=mid+1;
         }
         else if(nums[mid]<target){
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return ans;
 }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
       ans.push_back(firstOcc(nums,target));
       ans.push_back(lastOcc(nums,target));
        if(ans[0]==-1){
            return {-1,-1};
        }
        return ans;
    }
};