class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for (string x : operations) {
            if (x == "C")st.pop_back();
            else if (x == "D")st.push_back(2 * st.back());
            else if (x == "+") {
                int n = st.size();
                st.push_back(st[n - 1] + st[n - 2]);
            }
            else st.push_back(stoi(x));
        }
        int ans = 0;
        for (int x : st)ans += x;
        return ans;
    }
};