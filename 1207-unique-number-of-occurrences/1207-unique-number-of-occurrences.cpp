class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans;
        unordered_map<int,int> m;
        for(auto it:arr){
            m[it]++;
        }
        set <int> s;
        for(auto i: m){
            if(s.count(i.second)>0)
                return false;
            else
                s.insert(i.second);
        }
        return true;
        
    }
};