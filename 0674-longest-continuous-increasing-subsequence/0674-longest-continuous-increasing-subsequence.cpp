class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int ans = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])curr++;
            else curr = 1;
            ans = max(ans, curr);
        }
        return ans;
    }
};