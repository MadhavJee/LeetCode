class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

        //int n=nums.size();

    //     k%=n;
    //     for(int i=0;i<k;i++){
    //         //int x=nums[n-1];
    //         nums.insert(nums.begin(),nums[n-1]);
    //         //nums.erase(nums.begin()+i);
    //         nums.pop_back();
            
    //    }
        
    }
};