class Solution {
public:
    bool canPlace(int mid,vector<int>&position,int k){
    int n=position.size();
    int cnt=1;
    int dist=position[0];
    for(int i=1;i<n;i++){
        if(position[i]-dist>=mid){
            cnt++;
            dist =position[i];
         if(cnt==k)
             return true;
        }
      
    }
     return false;
}
    int maxDistance(vector<int>& position, int m) {
    int n =position.size();
    sort(position.begin(),position.end());
    int lo =0,hi=position[n-1]-lo;
    int mid;
    int ans=0;
    while(lo<=hi){
        int mid =lo + (hi - lo) / 2;
        if(canPlace(mid,position,m)){
            ans=mid;
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    return ans; 
    }
};