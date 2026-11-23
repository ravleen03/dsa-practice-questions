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
    vector<int> rightSideView(TreeNode* root) 
    {
        map<int,int>mp;
        vector<int>ans;
        queue<pair<TreeNode*,int>>q;
        if(root==nullptr)
        return {};
        q.push({root,0});
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* node=q.front().first;
            int row=q.front().second;
            q.pop();
            int r=row+1;
            if(node->left)
            q.push({node->left,r});
            if(node->right)
            q.push({node->right,r});
            mp[row]=node->val;
            }
        }
        for(auto q:mp)
        {
            int val=q.second;
            ans.push_back(val);
        }
        return ans;

        
    }
};