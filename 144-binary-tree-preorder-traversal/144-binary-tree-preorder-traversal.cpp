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
        
void voidpreorderTraversal(TreeNode* root,vector<int>& s)
    {
        if(root==NULL)
        {
            return ;
        }
        s.push_back(root->val);
        voidpreorderTraversal(root->left,s);
        voidpreorderTraversal(root->right,s);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> s;
        voidpreorderTraversal(root,s);
        return s;
            
    }
};