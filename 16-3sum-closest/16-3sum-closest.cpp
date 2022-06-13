class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min= INT_MAX;
        int ans;
        int low ,hi;
        int n=nums.size();
         vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            { low = i+1;
              hi  = n-1;
              while(low<hi){
                 
                  int x = nums[i] + nums[low] +nums[hi];
                  if(abs(target-x)<min)
                      {min= abs(target-x);
                        ans = x;
                      }
                      
                  
                if(x==target){
                    i= n-2;
                    return target;
                    break;

                }
                else if(x<target)
                    low++;
                else
                    hi--;
            }
            }
            
                     
        }
     return ans;  
    }
};