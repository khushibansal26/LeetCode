class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> m;
        int ans=0;
        for(auto it: nums)
            m[it]++;
        for(auto it:m)
        {   if(it.second>=2)
                ans=it.first;
        }
    return ans;
    }
};