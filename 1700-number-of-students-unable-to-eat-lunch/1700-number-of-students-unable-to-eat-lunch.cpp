class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sw) {
        queue<int>q;
        for(int x:st){
            q.push(x);
        }
        int idx=0,cnt=0;
        while(!q.empty() && cnt < q.size()){
            if(q.front()==sw[idx]){
                q.pop();
                idx++;
                cnt=0;
            }
            else{
                int x=q.front();
                q.pop();
                q.push(x);
                cnt++;
            }
        }
        return q.size();
        
    }
};