class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
      int low ,hi;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            { low = i+1;
              hi  = n-1;
              while(low<hi){
                if((nums[i] + nums[low] +nums[hi])==0){
                    vector <int> temp={nums[i],nums[low],nums[hi]}; 
                    ans.push_back(temp);
                    while(low<hi && nums[low]==nums[low+1]) low++;
                    while(low<hi && nums[hi]==nums[hi-1]) hi--;
                    
                    low++;hi--;       
                }
                else if((nums[i] + nums[low] + nums[hi])<0)
                    low++;
                else
                    hi--;
            }
            }
        }
        return ans;
    }
};