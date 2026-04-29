class Solution {
public:
    void solve(int i, int target, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int j = i; j < nums.size(); j++){
            if(j > i && nums[j] == nums[j-1]) continue;
            if(nums[j] > target) break;

            temp.push_back(nums[j]);
            solve(j + 1, target - nums[j], nums, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, target, nums, temp, ans);
        return ans;
    }
};