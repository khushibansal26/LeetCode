class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        int ans=n+1; // for the case if [1,2] then smallest is 3
        unordered_map<int,int>m;
        for(auto it:nums){
            if(it>0)
                m[it]++;
        }
        if(n==1){      //edge case
            if(nums[0]==1)
                return 2;
            else
                return 1;
        }
        for(int i=1;i<=n;i++){
            if(m.find(i)==m.end())
                {ans=i;
                break;}
        }
        return ans;
    }
};