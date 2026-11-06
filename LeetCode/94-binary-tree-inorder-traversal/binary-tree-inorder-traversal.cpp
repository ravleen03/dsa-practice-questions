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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>temp;
        vector<int>v;
        if(root==nullptr)
        return v;
        if(root->left)
        {
        temp=inorderTraversal(root->left);
        v.insert(v.end(),temp.begin(),temp.end());
        }
        v.push_back(root->val);
        if(root->right)
        {
            temp=inorderTraversal(root->right);
            v.insert(v.end(),temp.begin(),temp.end());
        }
        return v;
        
    }
};