class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0,ans=0;
        for(int x:nums){
            if(x==0){
                c++;
                ans+=c;
            }
            else c=0;
        }
        
        return ans;
    }
};