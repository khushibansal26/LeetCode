class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        // approach - > 2 binary searches
        // one for left most occurance and one for right most
        
        int left=-1, right =-1;
        int lo =0,hi= n-1;
        int mid;
        
        //binary search for left most part
        while(lo<=hi){
            mid =(lo + hi) /2 ;
            if(nums[mid]>target)
                hi =mid-1;
            else if(nums[mid]<target)
                lo =mid+1;
            else{
                left = mid;
                hi = mid-1;
            }
        }
        lo =0,hi =n-1;
        
      //binary search for right most part
        while(lo<=hi){
            mid =(lo + hi) /2 ;
            if(nums[mid]>target)
                hi =mid-1;
            else if(nums[mid]<target)
                lo =mid+1;
            else{
                right = mid;
                lo = mid+1;
            }
        }
        return {left,right};
    
    }
};