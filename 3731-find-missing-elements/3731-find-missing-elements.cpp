class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        vector<int>ans;
        for(int i=a+1;i<b;i++){
            if(!st.count(i))ans.push_back(i);
        }
        return ans;

    }
};