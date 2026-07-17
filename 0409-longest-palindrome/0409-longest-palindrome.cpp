class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int ans = 0;
        for (char c : s) {
            if (st.count(c)) {
                ans += 2;
                st.erase(c);
            } else st.insert(c);
        }
        if (!st.empty())ans++;
        return ans;
    }
};