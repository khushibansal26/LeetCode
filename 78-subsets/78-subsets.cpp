class Solution {
public:
 void subseq(int ind,vector<int>&temp,vector<vector<int>> &ans,vector<int> &nums){
        if(ind == nums.size()){
            ans.push_back(temp);
            return ;
        }
        
        temp.push_back(nums[ind]);
        subseq(ind +1, temp,ans,nums);
        temp.pop_back();
        subseq(ind+1,temp,ans,nums);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n =nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        subseq(0,temp,ans,nums);
        return ans;
    }
    
   
    
};