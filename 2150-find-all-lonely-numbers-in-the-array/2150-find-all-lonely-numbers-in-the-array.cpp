class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        int n =nums.size();
        unordered_map<int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        for(int i=0;i<n;i++){
            if((m.find(nums[i]-1)==m.end() && m.find(nums[i]+1)==m.end()) && m[nums[i]]==1)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};