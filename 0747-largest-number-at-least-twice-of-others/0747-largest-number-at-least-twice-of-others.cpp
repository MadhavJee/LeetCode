class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int lrg=0;
        int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]>lrg){
                lrg=nums[i];
                idx=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i==idx)continue;
            else{
                if(nums[i]*2>lrg)idx=-1;
            }
        }
        return idx;
    }
};