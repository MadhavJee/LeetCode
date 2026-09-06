class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int, int>>q;
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto& [num, count] : mp){
            q.push({count, -num});
        }
        vector<int>ans;
        while(!q.empty()){
            auto [count, num] = q.top();
            q.pop();
            for(int i=0; i<count; i++){
                ans.push_back(-num);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};