class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n= nums.size();
        int ans; 
        int sum=0;
        for(auto it:nums)
            sum+=it;
        
        int suml=0;
        for(int i=0;i<n;i++){
            if(i>0)
                suml+=nums[i-1];
            sum = sum-nums[i];
            
          //  cout<<sum<<" "<<suml<<"\n";
            if(suml==sum)
                return i;
        }
       return -1;
    }
};