class Solution {
public:
    bool isPerfectSquare(int num) {
      long long  int lo=1,hi=100000;
      long long  int mid;
      
        if(num==1)
            return true;
        while(lo<=hi){
            mid=(lo+(hi-lo)/2);
        //    cout<<mid<<" ";
            if(mid*mid==num)
                return true;
            else if(mid*mid>num)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return false;
    }
};