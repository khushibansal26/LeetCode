class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int sum=0;
        int maxm=INT_MIN;
        for(auto it:nums){
            sum+=it;
            maxm=max(sum,maxm);
            if(sum<0)
                sum=0;
        }
        
        return maxm;
    }
};