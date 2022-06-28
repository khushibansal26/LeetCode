class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         int n1 =nums1.size();
        int n2= nums2.size();
        unordered_map<int,int>m;
        vector<int> ans;
        for(auto it:nums1)
            m[it]++;
        
        for(auto it:nums2){
            if(m.find(it)!=m.end() &&m[it]>0){
                ans.push_back(it);
                m[it]--;
            }
        }
        return ans;
    }
};