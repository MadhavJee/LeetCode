class Trie{
    vector<vector<int>>t;
    vector<int>end;

public:
    Trie(){
        t.push_back(vector<int>(26,-1));
        end.push_back(0);
    }
    void insert(string s){
        int p=0;
        for(char c:s){
            int x=c-'a';
            if(t[p][x]==-1){
                t[p][x]=t.size();
                t.push_back(vector<int>(26,-1));
                end.push_back(0);
            }
            p=t[p][x];
        }
        end[p]=1;
    }
    bool search(string s){
        int p=0;
        for(char c:s) {
            int x=c-'a';
            if(t[p][x]==-1)return false;
            p=t[p][x];
        }
        return end[p];
    }
    bool startsWith(string s){
        int p=0;
        for(char c:s){
            int x=c-'a';
            if(t[p][x]==-1)return false;
            p=t[p][x];
        }
        return true;
    }
};