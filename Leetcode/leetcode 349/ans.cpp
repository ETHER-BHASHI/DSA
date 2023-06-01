class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int i=0;
       int j=0;
       int prev=INT_MAX;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       int n=nums1.size();
       int m=nums2.size();
       vector<int>ans;
       while(i<n && j<m){
           int element =nums1[i];
           if(element==nums2[j] && prev!=element){
               ans.push_back(element);
               prev=element;
               i++;j++;
           }
           else if(element>nums2[j]){
               j++;
           }
           else{
               i++;
           }
       }
       return ans;
       
    }
};