class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& cand, int ans) {
        vector<vector<int>> res;
        sort(cand.begin(),cand.end());
        vector<int> path;
        dfs(res,cand,ans,path,0);
        return res;
    }
    void dfs(vector<vector<int>>& res,vector<int>& cand,int ans,vector<int>& path,int idx)
    {
        if(ans==0)
        {
            res.push_back(path);return;
        }
        for(int i=idx;i<cand.size();i++)
        {
            if(cand[i]>ans) //if required sum is greater than target then no need to check further.
            return;            //That's the logic behind why we are sorting candidate array.
            path.push_back(cand[i]);
            dfs(res,cand,ans-cand[i],path,i);
            path.pop_back(); // backtrack
        }
    }
};