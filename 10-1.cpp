class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }

        //for the first permutation
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // step 2: put the index to it's correct position 
        for(int i=n-1;i>index;i--){
            //smallest bigger value than our index
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        
        //reverse the part after the index that will be just next greater value than our value
        reverse(nums.begin()+index+1,nums.end());

    }
};