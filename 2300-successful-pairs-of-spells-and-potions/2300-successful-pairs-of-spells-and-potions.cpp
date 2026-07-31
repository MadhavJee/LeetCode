class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;
        int m = potions.size();
        for (int spell : spells) {
            int low = 0, high = m - 1;
            int idx = m;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (1LL * spell * potions[mid] >= success) {
                    idx = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            ans.push_back(m - idx);
        }
        return ans;
    }
};