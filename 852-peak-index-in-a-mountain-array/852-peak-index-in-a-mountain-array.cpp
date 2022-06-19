class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        
        // o(n) --> traverses whole array
        //int ans=1;
        // for(int i=1;i<n-1;i++){
        //     if(a[i]>a[i-1] && a[i]>a[i+1])
        //         ans=i;
        
        //optimized
        int lo=0,hi=n-1;
        int mid;
        while(lo<hi){
            mid=lo+(hi-lo)/2;
            if(a[mid]<a[mid+1])
                lo= mid+1;
           else{
               hi=mid;
           }
        }
         
        return lo;
    }
};