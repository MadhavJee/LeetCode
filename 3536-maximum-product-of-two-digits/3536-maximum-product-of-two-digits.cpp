class Solution {
public:
    int maxProduct(int n) {
        int x = 0, y = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit > x) {
                y = x;
                x = digit;
            } 
            else if (digit > y)y = digit;
            n /= 10;
        }
        return x * y;
    }
};