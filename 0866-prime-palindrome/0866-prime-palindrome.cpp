class Solution {
public:
    bool isprime(int n){
        if(n<2)return false;
        if(n==2)return true;
        if(n%2==0)return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)return false;
        }
        return true;
    }
    bool isplandi(int n){
        int x=n,rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x=x/10;
        }
        return (n==rev);
    }
    int primePalindrome(int n) {
        if(n <= 11) n = max(n, 2);
        while(true){
            if(isprime(n) && isplandi(n)) return n;
            int len = to_string(n).size();
            if(len%2==0 && n>11) n = pow(10, len);
            else n++;
        }
    }
};