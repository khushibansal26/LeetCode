class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n =s.size();
        vector<int> ans;
     
     //   unordered_map<char,int> m;
        set<char> se;
        vector<vector<int>> vec;
        vector<vector<int>> temp;
        for(int i=0;i<n;i++){
          int hi=n-1;
           
            while(hi>i){
                if(s[i]==s[hi] && se.find(s[i])==se.end()){
                     se.insert(s[i]);
                     vec.push_back ({i,hi});
                     break;
                }
                else if(hi==i+1 && s[i]!=s[hi]){
                    se.insert(s[i]);
                     vec.push_back ({i,i});
                     break;
                }
               
                
                 hi--;    
            }
            if(hi==i){
                 se.insert(s[i]);
                 vec.push_back ({i,i});
                
}
        }
        
        // for(int i=0;i<vec.size();i++){
        //     for(int j = 0;j<vec[i].size();j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        // }
        
        sort(vec.begin(),vec.end());
        temp.push_back(vec[0]);
        
        for(int i=1;i<vec.size();i++){
           if(vec[i][0] <= temp[temp.size()-1][1])
               temp[temp.size()-1][1]= max(temp[temp.size()-1][1],vec[i][1]);
            else
            temp.push_back(vec[i]);
        }
        
        // for(int i=0;i<temp.size();i++){
        //     for(int j = 0;j<temp[i].size();j++){
        //         cout<<temp[i][j]<<" ";
        //     }
        // }
        
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i][1]-temp[i][0] +1);
        }
        
        return ans;
        
    }
};