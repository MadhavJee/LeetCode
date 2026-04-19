class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int count = 1, curr = 0;
        for(int x : nums){
            if(curr + x <= maxSum){
                curr += x;
            } else {
                count++;
                curr = x;
            }
        }
        return count <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low < high){
            int mid = low + (high - low) / 2;
            if(canSplit(nums, k, mid)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};