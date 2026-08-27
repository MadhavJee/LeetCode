class Solution {
public:
    double dfs(string a, string b,unordered_map<string, vector<pair<string,double>>>& g,unordered_set<string>& vis) {
        if(a==b)return 1.0;
        vis.insert(a);
        for(auto [x, val]:g[a]){
            if(!vis.count(x)){
                double res=dfs(x,b,g,vis);
                if(res!=-1)return val*res;
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& eq,vector<double>& val,vector<vector<string>>& queries) {
        unordered_map<string, vector<pair<string,double>>> g;
        for(int i=0;i<eq.size();i++){
            g[eq[i][0]].push_back({eq[i][1], val[i]});
            g[eq[i][1]].push_back({eq[i][0], 1.0 / val[i]});
        }
        vector<double> ans;
        for(auto q:queries){
            if(!g.count(q[0])||!g.count(q[1])){
                ans.push_back(-1);
                continue;
            }
            unordered_set<string> vis;
            ans.push_back(dfs(q[0], q[1], g, vis));
        }
        return ans;
    }
};