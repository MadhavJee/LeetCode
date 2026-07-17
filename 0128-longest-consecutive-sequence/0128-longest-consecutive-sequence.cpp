class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int x : st) {
            if (st.count(x - 1))continue;
            int len = 1;
            int curr = x;
            while (st.count(curr + 1)) {
                curr++;
                len++;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};