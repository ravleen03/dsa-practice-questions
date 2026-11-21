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
    int maxPathSum(TreeNode* root) 
    {
        int maxsum=INT_MIN;
        msum(root,maxsum);
        return maxsum;
        
    }
private:
    int msum(TreeNode* root, int &maxsum)
    {
        if(root==nullptr)
        return 0;
        int lh=msum(root->left,maxsum);
        int rh=msum(root->right,maxsum);
        int sum=max(0,lh)+max(0,rh)+root->val;
        maxsum=max(maxsum,sum);
        return root->val+max(0,max(lh,rh));
    }
};