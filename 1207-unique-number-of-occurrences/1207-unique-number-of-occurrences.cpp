class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int> m;
        for(auto i:arr)
            m[i]++;
       set<int> st;// set stores unique occurance only of each frq of number
       for(auto it:m)
       {
           if(st.count(it.second)>0)  // if count() checks if particluar value is repeated or not..
               // if it is already present returns 1 else 0
               return false;
           else
               st.insert(it.second);
       }
        return true;
    }
};