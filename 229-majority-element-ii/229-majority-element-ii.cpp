class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector <int> ans;
        int k = nums.size()/3;
        unordered_map <int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        for(auto it:nums ){
            if(m[it]>k && m[it]>0)
             { ans.push_back(it);
              m[it]=0;
             }
        }
    return ans;
    }
       
};