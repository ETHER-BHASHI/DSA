class Solution {
public:
int bin(vector<int>& nums, int target,int low,int high) {
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{ low=mid+1;
               
            }
        }
        return -1;
}

int findingpivot(vector<int>& nums){
        int high=nums.size()-1;
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid<high && nums[mid]>nums[mid+1]){
                 return mid;
            }
            else if( mid>low && nums[mid]<nums[mid-1]){
                return mid-1;
            }
           else if(nums[mid]<nums[low]){
                  high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
         int piv=findingpivot(nums);
           int e=nums.size()-1;
          if(piv==-1){
              return bin(nums,target,0,e);
          }
          else{
              if(target<nums[0]){
                  return bin(nums,target,piv+1,e);
              }
              else{
                  return bin(nums,target,0,piv);
              }
          }
          return 0;
    }
         
    
};