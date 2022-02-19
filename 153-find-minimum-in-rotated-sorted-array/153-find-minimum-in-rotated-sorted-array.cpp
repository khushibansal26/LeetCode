class Solution {
public:
    int findMin(vector<int>& nums) {
        int  n =nums.size();
        int lo =0, hi =n-1;
        int mid;
        if(nums[n-1]>nums[0])
            return nums[0];
        while(lo<hi){
          
            mid =(lo + hi)/2;
            if(nums[mid]>=nums[0]){
                lo = mid + 1;  
            }
            else{
                hi = mid;
            }
        }
        return nums[lo];
    }
};