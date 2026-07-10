class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>ra,di;
        int n=senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R')ra.push(i);
            else di.push(i);
        }
        while (!ra.empty() && !di.empty()) {
            int r = ra.front();
            int d = di.front();
            ra.pop();
            di.pop();
            if (r < d)ra.push(r + n);
            else di.push(d + n);
        }
        return ra.empty() ? "Dire" : "Radiant";
    }
};