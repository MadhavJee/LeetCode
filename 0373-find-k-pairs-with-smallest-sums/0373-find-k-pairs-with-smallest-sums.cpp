class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,greater<pair<int, pair<int,int>>>> pq;
        for (int i = 0; i < min((int)nums1.size(), k); i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }
        vector<vector<int>> ans;
        while (k-- && !pq.empty()) {
            auto cur = pq.top();
            pq.pop();
            int i = cur.second.first;
            int j = cur.second.second;
            ans.push_back({nums1[i], nums2[j]});
            if (j + 1 < nums2.size()) {
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }
        return ans;
    }
};