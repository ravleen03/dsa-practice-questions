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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int longpath=0;
        height(root,longpath);
        return longpath;
        
    }
private:
    int height(TreeNode* root,int &longpath)
    {
        if(root==nullptr)
        return 0;
        int lh=height(root->left,longpath);
        int rh=height(root->right,longpath);
        longpath=max(longpath,lh+rh);
        return 1+max(lh,rh);
    }
};