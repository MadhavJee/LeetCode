class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        int zero = 0;
        int n = nums.size();
        for (int a : nums) {
            x ^= a;
            if (a == 0)zero++;
        }
        if (x != 0)return n;
        if (zero == n)return 0;
        return n - 1;
    }
};