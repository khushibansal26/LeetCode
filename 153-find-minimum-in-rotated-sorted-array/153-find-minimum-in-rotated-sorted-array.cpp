class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans;
        int n =nums.size();
        int lo= 0,hi=n-1;
        int mid;
        while(lo<hi){
            if(nums[0]<nums[n-1])
                return nums[0];
            mid =lo + (hi-lo)/2;
            
            if(nums[mid]>=nums[0])  // i.e. mid is lying on part1 i.e biger 
                lo=mid+1;
            else
                hi = mid;  
        }
        return nums[lo];
    }
};