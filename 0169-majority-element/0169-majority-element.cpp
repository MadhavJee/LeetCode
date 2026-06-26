class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans=0;
        int val=nums[0];
        for(auto x:mp){
            if(x.second >ans){
                ans=x.second;
                val=x.first;
            }
        }
        return val;
    }
};