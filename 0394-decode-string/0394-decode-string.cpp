class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> st;
        string curr = "";
        int k = 0;
        for (char c : s) {
            if (isdigit(c))k = k * 10 + (c - '0');
            else if (c == '[') {
                num.push(k);
                st.push(curr);
                k = 0;
                curr = "";
            }
            else if (c == ']') {
                string temp = curr;
                curr = st.top();
                st.pop();
                int count = num.top();
                num.pop();
                while (count--)curr += temp;
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};