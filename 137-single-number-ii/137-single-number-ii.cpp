class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int arr[32]={0};
       for(int i=0;i<nums.size();i++){
           int n =nums[i];
           for(int j=0;j<32;j++){
               arr[j]+=n & 1;
               n =n>>1;
               if(n==0)
                  break;
           }
       }
        for(int j=0;j<32;j++){
        //   cout<<arr[j]<<" ";
            int n=arr[j];
            n= n%3;
            if(n)
                ans =  ans + (1<<j);
        }
        return ans;
        }
    
};