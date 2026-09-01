class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines=1;
        int curr=0;
        for(char c:s){
            int w=widths[c-'a'];
            if(curr+w>100){
                lines++;
                curr=w;
            } 
            else curr += w;
        }
        return{lines,curr};
    }
};