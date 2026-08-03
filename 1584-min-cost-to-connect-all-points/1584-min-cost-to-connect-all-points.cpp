class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<bool> vis(n, false);
        pq.push({0, 0});
        int ans = 0;
        int count = 0;
        while (!pq.empty() && count < n) {
            auto curr = pq.top();
            pq.pop();
            int cost = curr.first;
            int u = curr.second;
            if (vis[u])continue;
            vis[u] = true;
            ans += cost;
            count++;
            for (int v = 0; v < n; v++) {
                if (!vis[v]) {
                    int d = abs(points[u][0] - points[v][0]) +
                            abs(points[u][1] - points[v][1]);

                    pq.push({d, v});
                }
            }
        }
        return ans;
    }
};