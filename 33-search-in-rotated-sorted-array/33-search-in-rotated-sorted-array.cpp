class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int lo=0,hi=n-1;
      while(lo<=hi){
      int   mid =lo + (hi-lo)/2;
          if(a[mid]==target)
              return mid;
        
          //left side is sorted
        if(a[mid]>=a[lo])  {
              if(target>=a[lo]&&target<=a[mid])
              hi=mid-1;
          else
              lo=mid+1;
          }
          else{
              if(target>=a[mid] &&target<=a[hi])
                  lo=mid+1;
              else
                  hi=mid-1;
          }
       
          
          
      }
      
           return -1;
          
    }
};