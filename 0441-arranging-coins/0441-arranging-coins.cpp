class Solution {
public:
    int arrangeCoins(int n) {
        // int x=n,c=0;
        // for(int i=1;i<=n;i++){
        //     if(x>=i){
        //         c++;
        //         x=x-i;
        //     }
        //     else break;
        // }
        // return c;
        long low=1,high=n;
        int ans=0;
        while(low<=high){
            long mid=(low+high)/2;
            if(mid*(mid+1)/2 <=n){
                ans=(int)mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};