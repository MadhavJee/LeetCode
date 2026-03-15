class Solution {
public:
    int romanToInt(string s) {
       int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i]=='I') ans += 1;
            if(s[i]=='V') ans += 5;
            if(s[i]=='X') ans += 10;
            if(s[i]=='L') ans += 50;
            if(s[i]=='C') ans += 100;
            if(s[i]=='D') ans += 500;
            if(s[i]=='M') ans += 1000;

            if(i>0){
                if(s[i]=='V' && s[i-1]=='I') ans -= 2;
                if(s[i]=='X' && s[i-1]=='I') ans -= 2;
                if(s[i]=='L' && s[i-1]=='X') ans -= 20;
                if(s[i]=='C' && s[i-1]=='X') ans -= 20;
                if(s[i]=='D' && s[i-1]=='C') ans -= 200;
                if(s[i]=='M' && s[i-1]=='C') ans -= 200;
            }
        }

        return ans;
    }
};