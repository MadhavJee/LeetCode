class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        
        function<void(int, int, vector<int>&)> dfs = [&](int st, int rem, vector<int>& cur) {
            if (rem == 0) { res.push_back(cur); return; }
            for (int i = st; i < candidates.size() && candidates[i] <= rem; i++) {
                cur.push_back(candidates[i]);
                dfs(i, rem - candidates[i], cur);
                cur.pop_back();
            }
        };
        
        vector<int> cur;
        dfs(0, target, cur);
        return res;
    }
};