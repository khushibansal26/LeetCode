class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
        unordered_map<int,int> m;
        for(auto it:nums)
            m[it]++;
        for(auto i:m){
            if(i.second>=2)
                return true;
        }
      
            return false;
    }
};