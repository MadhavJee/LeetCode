class DSU {
public:
    vector<int> parent;
    DSU(int n) {
        parent.resize(n + 1);
        for (int i = 1; i <= n; i++){
            parent[i] = i;
        }
    }
    int find(int x) {
        if (parent[x] == x)return x;
        return find(parent[x]);
    }
    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        parent[px] = py;
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU dsu(n);
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            if (dsu.find(u) == dsu.find(v))return edge;
            dsu.unite(u, v);
        }
        return {};
    }
};