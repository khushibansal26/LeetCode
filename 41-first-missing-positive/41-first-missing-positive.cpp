class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        int ans=n+1; // for the case if [1,2] then smallest is 3
        
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i] !=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans=i+1;
                break;
            }
        }
        return ans;
    }
};