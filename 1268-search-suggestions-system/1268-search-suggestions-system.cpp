class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p,string s){
        sort(p.begin(),p.end());
        vector<vector<string>> ans;
        string x="";
        for(char c:s){
            x+=c;
            vector<string> v;
            for(string w:p){
                if(w.substr(0,x.size())==x){
                    v.push_back(w);
                    if(v.size()==3)break;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};