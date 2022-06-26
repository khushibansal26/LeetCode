class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       bool ans;
        
        int n = matrix[0].size();
        //cout<<n;
        int lo=0,hi=matrix.size()-1;
        int mid;
        int row;
        while(lo<=hi){
            mid =lo + (hi-lo)/2;
            if(matrix[mid][0]>target)
                hi=mid-1;
            else if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                row=mid;
                break;
            }
            else{
                lo=mid+1;
            }
        }
        
        lo=0,hi=n-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
                hi=mid-1;
            else
                lo=mid+1;
            
        }
        
        return false;
        
    }
};