class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        // unordered_map<int,int> m;
        // for(auto it:nums)
        //     m[it]++;
        // for(auto it:m){
        //     if(it.second==0)
        //         ans.push_back(it.first);
        // }
        
        for(int i=0;i<nums.size();i++){
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};