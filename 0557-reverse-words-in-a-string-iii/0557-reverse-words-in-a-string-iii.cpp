class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        for (int r=0;r<=s.size();r++){
            if(r==s.size()||s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        return s;
    }
};