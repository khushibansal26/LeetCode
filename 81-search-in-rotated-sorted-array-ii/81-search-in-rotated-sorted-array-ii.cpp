class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int lo=0,hi=n-1;
      while(lo<=hi){
          
          // to check duplicates
          // worst case is [1,1,1,1,1,1]
          // in this we keep inc lo till end.. so tc becomes o(n)
          while(lo<hi && arr[lo]==arr[lo+1]) lo++;
            while(lo<hi && arr[hi]==arr[hi-1]) hi--;
          
      int   mid =lo + (hi-lo)/2;
          if(arr[mid]==target)
              return true;
        
          //left side is sorted
        if(arr[mid]>=arr[lo])  {
              if(target>=arr[lo]&&target<=arr[mid])
              hi=mid-1;
             else
              lo=mid+1;
            
            
          }
          else{
              if(target>=arr[mid] &&target<=arr[hi])
                  lo=mid+1;
              else
                  hi=mid-1;
          }
       
          
          
      }
      
           return false;
          
    }
};