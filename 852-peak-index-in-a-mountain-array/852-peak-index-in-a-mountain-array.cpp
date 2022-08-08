class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n =nums.size();
        int lo=0,hi=n-1;
        int mid;
        int ans;
        while(lo<=hi){
            mid =lo + (hi-lo)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                {ans=mid;
                break;}
            else if(nums[mid]<nums[mid+1])
                lo=mid;
            else
                hi=mid;
                
        }
        return ans;
    }
};