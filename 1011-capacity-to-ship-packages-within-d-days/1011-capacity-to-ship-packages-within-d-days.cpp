class Solution {
public:
    
    bool isPossible(int mid,vector<int>&weights,int days){
        int day=1,weight=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+weight<=mid){
                weight+=weights[i];
            }
            else{
                if(weights[i]>mid)
                    return false;
                else{
                    day+=1;
                    weight=weights[i];
                }
            }
            
        }
        if(day>days)
                return false;
            else
                return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n =weights.size();
        long long int lo=0,hi=0,ans=0;
        int mid;
        for(auto it:weights)
            hi+=it;
        while(lo<=hi){
            mid= lo + (hi-lo)/2;
            if(isPossible(mid,weights,days)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};