class Solution {
public:
    int solve(string &a, string &b, int i, int j, vector<vector<int>>& dp) {
        if (i == a.size())return b.size() - j;
        if (j == b.size())return a.size() - i;
        if (dp[i][j] != -1)return dp[i][j];
        if (a[i] == b[j])return dp[i][j] = solve(a, b, i + 1, j + 1, dp);
        int insert = solve(a, b, i, j + 1, dp);
        int del = solve(a, b, i + 1, j, dp);
        int replace = solve(a, b, i + 1, j + 1, dp);
        return dp[i][j] = 1 + min({insert, del, replace});
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(word1, word2, 0, 0, dp);
    }
};