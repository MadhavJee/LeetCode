class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long ans = 0;
        int n = arr.size(), mod = 1e9+7;
        stack<int> st;
        for(int i = 0; i <= n; i++){
            while(!st.empty() && (i == n || arr[st.top()] >= arr[i])){
                int mid = st.top(); st.pop();
                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;
                ans = (ans + (long long)arr[mid] * left * right) % mod;
            }
            st.push(i);
        }
        return ans;
    }
};