class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        int n = score.size();
        sort(temp.begin(), temp.end(), greater<int>());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int x : temp){
            mp[x] = rank++;
        }
        vector<string> ans(n);
        for (int i = 0; i < n; i++) {
            int r = mp[score[i]];
            if (r == 1)ans[i] = "Gold Medal";
            else if (r == 2)ans[i] = "Silver Medal";
            else if (r == 3)ans[i] = "Bronze Medal";
            else ans[i] = to_string(r);
        }
        return ans;
    }
};