class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0];
        int mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currsum+nums[i]>nums[i]){
                currsum+=nums[i];
            }
            else {
                currsum=nums[i];
            }
            mx=max(mx,currsum);
        }
        return mx;
    }
};