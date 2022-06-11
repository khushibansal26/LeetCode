class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
//         this method has tc=> o(n) ans sc => o(n)
//         unordered_map<int,int> m;
        vector<int> ans;
//         for(auto it:nums){
//             m[it]++;
//         }
//         for(auto i:m){
//             if(i.second==2)
//                 ans.push_back(i.first);
                
//         }
//         return ans;
        
        
//         METHOD ==>2 
        for(int i=0;i<nums.size();i++){
           if(nums[abs(nums[i])-1]<0)
              ans.push_back(abs(nums[i]));
           nums[abs(nums[i])-1] =-nums[abs(nums[i])-1];
        }
        return ans;
        
    }
};