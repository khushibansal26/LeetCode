class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
     int n =digits.size();
        int cnt=0;
        for(auto it:digits){
            if (it==9)
                cnt++;
                
        }
        if(n==cnt){
            vector<int>ans;
            ans.push_back(1);
            for(int i=1;i<=n;i++)
                ans.push_back(0);
            return ans;
        }
       vector<int>ans=digits;
        if(digits[n-1]!=9)
        {
            ans[n-1]=ans[n-1]+1;
            return ans;
        }
        else{
            int i;
           for(i=n-1;i>=0;i--){
               if(ans[i]==9)
                   ans[i]=0;
               else
                   break;
                   
           }
            ans[i]=ans[i]+1;
        }
        return ans;
       
      
    }
};