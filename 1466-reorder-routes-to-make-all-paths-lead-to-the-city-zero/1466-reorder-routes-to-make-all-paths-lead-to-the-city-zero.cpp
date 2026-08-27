class Solution{
public:
    int ans=0;
    void dfs(int node,int parent,vector<vector<pair<int,int>>>& adj){
        for(auto [next,cost]:adj[node]){
            if(next==parent)continue;
            ans+=cost;
            dfs(next,node,adj);
        }
    }
    int minReorder(int n,vector<vector<int>>& connections){
        vector<vector<pair<int,int>>> adj(n);
        for(auto c:connections){
            int u = c[0];
            int v = c[1];
            adj[u].push_back({v,1});
            adj[v].push_back({u,0});
        }
        dfs(0,-1,adj);
        return ans;
    }
};