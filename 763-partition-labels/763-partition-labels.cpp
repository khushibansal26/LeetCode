class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n =s.size();
        vector<int> ans;
        unordered_map<char,int> m;
         for(int i=0;i<n;i++){
             m[s[i]]=i;
             
         }
        
        int prev=-1,maxi=0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,m[s[i]]);
            if(maxi==i){
                ans.push_back(maxi - prev);
                prev =maxi;
            }
        }
        return ans;
    }
};