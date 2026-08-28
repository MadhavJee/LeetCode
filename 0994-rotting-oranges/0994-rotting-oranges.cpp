class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size(),fresh=0,time=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) {
                if(g[i][j]==2)q.push({i,j});
                if(g[i][j]==1)fresh++;
            }
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.empty() && fresh){
            int sz=q.size();
            time++;
            while(sz--){
                auto [x,y]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int a=x+dx[k],b=y+dy[k];
                    if(a>=0&&a<n&&b>=0&&b<m&&g[a][b]==1){
                        g[a][b]=2;
                        fresh--;
                        q.push({a,b});
                    }
                }
            }
        }
        return fresh?-1:time;
    }
};