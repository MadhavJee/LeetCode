class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1,st2;
        vector<int>ans;
        for(int num:nums1){
            st1.insert(num);
        }
        for(int num:nums2){
            if(st1.count(num)){
                st2.insert(num);
            }
        }
        for(auto x:st2)ans.push_back(x);
        return ans;
    }
};