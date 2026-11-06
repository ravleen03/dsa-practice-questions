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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> v;
        vector<int>temp;
        if(root==nullptr)
        return v;
        if(root->left)
        {
        temp=postorderTraversal(root->left);
        v.insert(v.end(),temp.begin(),temp.end());
        }
        if(root->right)
        {
        temp=postorderTraversal(root->right);
        v.insert(v.end(),temp.begin(),temp.end());
        }
        if(root)
        v.push_back(root->val);
        return v;
    }
};