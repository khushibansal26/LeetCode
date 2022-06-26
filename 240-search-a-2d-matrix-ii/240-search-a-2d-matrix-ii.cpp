class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
       int le =0, ri=n-1;
        while(le<matrix.size() &&ri>=0){
            if(matrix[le][ri]==target)
                return true;
            else if(matrix[le][ri]>target)
                ri--;
            else
                le++;
        }
        return false;
    }
};