class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size(),m=maze[0].size();
        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int dist=0;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.empty()){
            int size=q.size();
            dist++;
            while(size--){
                auto [x,y]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx<0||nx>=n||ny<0||ny>=m||maze[nx][ny]=='+')continue;
                    if(nx==0||nx==n-1||ny==0||ny==m-1)return dist;
                    maze[nx][ny]='+';
                    q.push({nx,ny});
                }
            }
        }
        return -1;
    }
};