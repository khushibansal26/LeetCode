class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     vector<vector<int>> ans;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int lo,hi;
        for(int i=0;i<n-3;i++){
            if(nums[i]>target &&nums[i]>0)
                break;
            if(i==0 || (i>0&&nums[i]!=nums[i-1]))
            {
            for(int j=i+1;j<n-2;j++){
                if(j==i+1 || (nums[j]!=nums[j-1])){
                lo = j+1,hi=n-1;
                while(lo<hi){
                     int tsum = target - (nums[i] + nums[j]);
           
                    if(nums[lo]+nums[hi]<tsum)
                        lo++;
                    else if(nums[lo]+nums[hi]>tsum)
                        hi--;
                    else{
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        sort(temp.begin(),temp.end());
                        ans.push_back(temp);
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++,hi--;
                    }
                    
                }
            }
            
        }
            
        }
        }  
    sort(ans.begin(),ans.end());
        return ans;
    }
};