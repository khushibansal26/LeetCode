class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        vector<int> ans;
        for(auto it:nums1)
            s.insert(it);
        for(auto it:nums2){
            if(s.count(it)){
                ans.push_back(it);
                s.erase(it);
            }
          
        }
          return ans;
    }
};