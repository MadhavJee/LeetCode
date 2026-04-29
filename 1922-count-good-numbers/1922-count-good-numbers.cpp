class Solution {
public:
    long long mod = 1e9 + 7;
    long long power(long long x, long long n){
        long long res = 1;
        while(n){
            if(n & 1) res = (res * x) % mod;
            x = (x * x) % mod;
            n >>= 1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        return (power(5, even) * power(4, odd)) % mod;
    }
};