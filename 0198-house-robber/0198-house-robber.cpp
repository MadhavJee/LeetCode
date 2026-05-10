class Solution {
public:
    int rob(vector<int>& nums) {
        int prv1 = 0, prv2 = 0;
        for (int x : nums) {
            int tk = x + prv2;
            int sk = prv1;
            int curr = max(tk, sk);
            prv2 = prv1;
            prv1 = curr;
        }
        return prv1;
    }
};