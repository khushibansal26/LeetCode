class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n =nums.size();
        int lo=0,hi=n-1;
        int mid;
       
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(nums[mid]==target)
               { 
               return mid;
            }
            else if(nums[mid]>target)
                hi=mid-1;
            else
                lo =mid+1;
            
        }
        return lo;
        
        
    }
};