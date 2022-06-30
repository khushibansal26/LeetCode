class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k =nums.size()/2;
        int ans;
        unordered_map<int,int> m;
        for(auto it:nums)
            m[it]++;
        
        for(auto it:nums)
        {
            if(m[it]>k)
               ans=it; 
        }
        return ans;
    }
};