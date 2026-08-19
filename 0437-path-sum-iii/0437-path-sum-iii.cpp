/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root,long long sum,vector<long long>& path) {
        if(root==NULL)return;
        path.push_back(root->val);
        long long curr=0;
        for(int i=path.size()-1;i>=0;i--) {
            curr+=path[i];
            if(curr==sum)ans++;
        }
        dfs(root->left,sum,path);
        dfs(root->right,sum,path);
        path.pop_back();
    }
    int pathSum(TreeNode* root,int targetSum) {
        vector<long long> path;
        dfs(root,targetSum,path);
        return ans;
    }
};