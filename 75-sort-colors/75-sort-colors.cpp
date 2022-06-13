class Solution {
public:
    void sortColors(vector<int>& nums) {
        // one way is to count all occurances of 0,1 and 2
        //then filling array acco to that
        // tc -> 0(n) + 0(n){ counting + filling}
        
        
        // dutch national flag algorithm->o(n)
         int n =nums.size();
       int lo = 0;
        int hi =n-1;
        int mid =0;
        while(mid<=hi){
            if(nums[mid]==1)
                mid++;
            else if((nums[mid]==0)){
                swap(nums[mid],nums[lo]);
                    mid++;
                lo++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[hi]);
                hi--;
            }
        }
        
    }
};