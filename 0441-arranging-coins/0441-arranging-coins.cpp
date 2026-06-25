class Solution {
public:
    int arrangeCoins(int n) {
        int x=n,c=0;
        for(int i=1;i<=n;i++){
            if(x>=i){
                c++;
                x=x-i;
            }
            else if(x<i)break;
        }
        return c;
    }
};