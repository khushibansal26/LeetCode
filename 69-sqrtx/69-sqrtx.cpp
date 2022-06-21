class Solution {
public:
    int mySqrt(int x) {
    long long    int ans;
     long   int lo=1,hi=x;
    long long    int mid;
        if(x==0)
            return 0;
        else if(x==1)
            return 1;
        while(lo<hi){
         mid =lo + (hi-lo)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x &&(mid+1)*(mid+1)>x){
                ans=mid;
                break;
            }
               
            else if(mid*mid>x)
                hi=mid;
            else
                lo=mid;
        }
        return ans;
    }
};