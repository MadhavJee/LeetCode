class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int target, int idx, vector<int>& curr) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (idx == nums.size() || target < 0)return;

        curr.push_back(nums[idx]);
        solve(nums, target - nums[idx], idx, curr);
        curr.pop_back();

        solve(nums, target, idx + 1, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(candidates, target, 0, curr);
        return ans;
    }
};