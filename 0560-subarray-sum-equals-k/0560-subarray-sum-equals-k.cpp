class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0, c = 0;
        for(int num : nums){
            sum += num;
            if(sum == k) c++;
            c += mp[sum - k];
            mp[sum]++;
        }
        return c;
    }
};
        
