class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
       int low =0;
        vector<int> ans;
        int high =n-1;
        while(low<high){
            if(nums[low] + nums[high]==target){
                ans.push_back(low+1);
                ans.push_back(high+1);
               break;
            }
            else if(nums[low] + nums[high]>target)
                high--;
            else
                low++;
        }
        return ans;
       }
    
};