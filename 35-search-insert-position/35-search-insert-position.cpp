class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0,mid,high=nums.size()-1;
        while(low<=high){
            mid =low+high;
            if(nums[mid]==target)
                return  mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
                high =mid-1;    
                
            }
        if(target<nums[0])
            return mid;
        else
            return mid+1;
        }
    
};