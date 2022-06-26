class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       bool ans;
        int n= matrix[0].size();
      int lo=0,hi=( matrix.size() * matrix[0].size())-1;
        int mid;
        while(lo<=hi){
            mid =lo + (hi-lo)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if(matrix[mid/n][mid%n]>target)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return false;
    }
};