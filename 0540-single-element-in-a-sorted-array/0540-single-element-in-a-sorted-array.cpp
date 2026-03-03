class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        else if(nums[0]!=nums[1])return nums[0];

        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if((nums[mid]!=nums[mid-1]) && (nums[mid]!=nums[mid+1])){
                return nums[mid];
            }
            else if(mid%2==1) {
                if(nums[mid]==nums[mid-1]){
                    low=mid+1;
                } 
                else{
                    high=mid-1;
                }
            }
            else{
                 if(nums[mid]==nums[mid+1]){
                    low=mid+1;
                } 
                else{
                    high=mid-1;
                }
                
            }
        }
        return -1;
        
    }
};