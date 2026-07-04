class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(string str:words){
            if(s.find(str)==0)c++;
        }
        return c;
    }
};