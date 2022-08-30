class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unordered_map<char,int> m;
        string s;
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string temp1 = strs[0];
        string temp2 = strs[n-1];
      string ans="";
        int i=0;
        while(i<temp1.size() && i<temp2.size()){
            if(temp1[i]==temp2[i])
                ans+=temp1[i];
            else
                break;
            i++;
        }
       
        return ans;
    }
};