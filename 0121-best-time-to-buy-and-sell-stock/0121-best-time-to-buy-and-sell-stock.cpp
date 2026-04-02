class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=prices[0];
        int pro=0;
        for(int i=1;i<prices.size();i++){
            pro=max(pro,prices[i]-x);
            x=min(x,prices[i]);
        }
        return pro;
    }
};