class Solution {
public:

int first(vector<int>& nums, int target){
    int low=0;
    int n=nums.size();
    int high=n-1;
   int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            ans=mid;
            high=mid-1;

        }
        else if(nums[mid]<target){
        
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    return ans;
}
int second(vector<int>& nums, int target){
  int low=0;
    int n=nums.size();
    int high=n-1;
   int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            ans=mid;
           low=mid+1;

        }
        else if(nums[mid]<target){
            
           low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    return ans;

    
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstt=  first(nums,target);
      
        if(firstt==-1)return{-1,-1};
        else{
        int secondd=second(nums,target);
         return {firstt,secondd};
        }
    }
};