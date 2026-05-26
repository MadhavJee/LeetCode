class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        int ans = 10;
        int unq = 9;
        int avl = 9;
        for (int i = 2; i <= n && avl > 0; i++) {
            unq *= avl;
            ans += unq;
            avl--;
        }
        return ans;
    }
};