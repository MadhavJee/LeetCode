class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                c++;
                nums[i]=nums[i]^1;
                nums[i+1]=nums[i+1]^1;
                nums[i+2]=nums[i+2]^1;
            }
        }
        for(int x:nums){
            if(x==0)return -1;
        }
        return c;
    }
};