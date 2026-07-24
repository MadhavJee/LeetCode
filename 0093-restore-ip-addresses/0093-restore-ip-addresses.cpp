class Solution {
public:
    vector<string> ans;
    void solve(string s, int idx, int part, string curr) {
        if (part == 4) {
            if (idx == s.size()){
                ans.push_back(curr.substr(0, curr.size() - 1));
            }
            return;
        }
        for (int i = 1; i <= 3; i++) {
            if (idx + i > s.size())break;
            string temp = s.substr(idx, i);
            if (temp.size() > 1 && temp[0] == '0')continue;
            if (stoi(temp) > 255)continue;

            solve(s, idx + i, part + 1, curr + temp + ".");
        }
    }
    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return ans;
    }
};