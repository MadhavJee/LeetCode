class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,mul=1,x=n;
        while(x!=0){
            int r=x%10;
            sum+=r;
            mul*=r;
            x/=10;
        }
        int tot=sum+mul;
        if(n%tot==0)return true;
        else return false;

    }
};