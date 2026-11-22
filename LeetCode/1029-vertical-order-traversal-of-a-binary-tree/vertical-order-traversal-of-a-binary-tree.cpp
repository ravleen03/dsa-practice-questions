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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int left=0,right=0;
        if(root==nullptr)
        return vector<vector<int>>();
        return levelorder(root,left,right);
    }
private:
    vector<vector<int>>levelorder(TreeNode* root,int left,int right)
    {
        map<int, map<int, multiset<int>>> trav;
        vector<vector<int>>ans;
        queue<tuple<TreeNode*,int,int>>q;
        q.push({root,left,right});
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node=get<0>(q.front());
                int row=get<1>(q.front());
                int col=get<2>(q.front());
                q.pop();
                if(node->left)
                {
                    int lr=row+1;
                    int lc=col-1;
                    q.push({node->left,lr,lc});
                }
                if(node->right)
                {
                    int rr=row+1;
                    int rc=col+1;
                q.push({node->right,rr,rc});
                }
            trav[col][row].insert(node->val);
            }
        }
        for(auto p:trav)
        {
            vector<int>col;
            for(auto q: p.second)
            {
                for(auto r: q.second)
                col.push_back(r);
            }
            ans.push_back(col);
        }
        return ans;
    }
};