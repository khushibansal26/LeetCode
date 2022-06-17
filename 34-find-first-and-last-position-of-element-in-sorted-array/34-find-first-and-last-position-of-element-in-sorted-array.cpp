class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int lo,hi,mid;
        lo=0,hi =n-1;
        int ans1=-1,ans2=-1;
        //to find first occurance 
        while(lo<=hi){
        mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                ans1= mid;
                hi = mid-1;
                
            }
            else if(nums[mid]>target)
                hi =mid-1;
            else
                lo = mid+1;
        }
        
        // to find last coccurance 
        lo=0,hi=n-1;
        while(lo<=hi){
             mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                ans2= mid;
                lo= mid+1;
                
            }
            else if(nums[mid]>target)
                hi =mid-1;
            else
                lo = mid+1;
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};