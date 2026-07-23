class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>& curr, vector<bool>& vis) {
        if (curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i])continue;
            if (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1])continue;
            vis[i] = true;
            curr.push_back(nums[i]);
            solve(nums, curr, vis);
            curr.pop_back();
            vis[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        vector<bool> vis(nums.size(), false);
        solve(nums, curr, vis);
        return ans;
    }
};