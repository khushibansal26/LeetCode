class Solution {
public:
    int getPivot ( vector <int>  &nums){
        int n  = nums.size();
        int lo=0,hi = n-1;
        int mid;
         while(lo<hi){
          
            mid =(lo + hi)/2;
            if(nums[mid]>=nums[0]){
                lo = mid + 1;  
            }
            else{
                hi = mid;
            }
        }
        return lo;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=-1;
       int pivot = getPivot(nums);
      
        if(target >=nums[pivot]  && target<=nums[n-1])
        { int lo=pivot,hi = n-1;
        int mid;
         while(lo<=hi){
             mid =(lo + hi)/2;
             if(nums[mid]==target)
             {ans =mid;
             break;}
             else if(nums[mid]>target)
                 hi = mid-1;
             else
                 lo =mid +1;
             
         }
            
        }
        else{
            int lo=0,hi = pivot-1;
        int mid;
         while(lo<=hi){
             mid =(lo + hi)/2;
             if(nums[mid]==target)
             {ans =mid;
             break;}
             else if(nums[mid]>target)
                 hi = mid-1;
             else
                 lo =mid +1;
            
        }
        }
         return ans;
    }
       
};