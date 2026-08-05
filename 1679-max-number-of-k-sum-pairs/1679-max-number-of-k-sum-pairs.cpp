class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int x : nums) {
            if (mp[k - x] > 0) {
                ans++;
                mp[k - x]--;
            } else {
                mp[x]++;
            }
        }
        return ans;
    }
};