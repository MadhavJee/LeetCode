class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        int left = 0, right = n - 1;
        priority_queue<int, vector<int>, greater<int>> pq1, pq2;
        for (int i = 0; i < candidates && left <= right; i++){
            pq1.push(costs[left++]);
        }
        for (int i = 0; i < candidates && left <= right; i++){
            pq2.push(costs[right--]);
        }
        long long ans = 0;
        while (k--) {
            if (pq2.empty() || (!pq1.empty() && pq1.top() <= pq2.top())) {
                ans += pq1.top();
                pq1.pop();
                if (left <= right)pq1.push(costs[left++]);
            }
            else {
                ans += pq2.top();
                pq2.pop();
                if (left <= right)pq2.push(costs[right--]);
            }
        }
        return ans;
    }
};