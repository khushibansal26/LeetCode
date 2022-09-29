class Solution {
public:
    void solve(vector<int>&arr,vector<int> &temp, int target, int ind,vector<vector<int>> &ans)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }

    if (arr[ind] <= target)
    {
        temp.push_back(arr[ind]);
        solve(arr,temp, target - arr[ind], ind,ans);
        temp.pop_back();
    }
    solve(arr,temp, target, ind + 1,ans);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        vector<int> temp;
        int ind=0;
        solve(candidates,temp, target, ind,ans);
        return ans;
    }
};