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
private:
    int sumOfDeepestLeaves=0;
    int maxDepth=INT_MIN;
public:
    void preorder(TreeNode* root, int depth)
    {
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL)
        {
            if(depth>maxDepth)
            {
                maxDepth=depth;
                sumOfDeepestLeaves=root->val;               
            }
            else if(depth==maxDepth)
            {
                sumOfDeepestLeaves+=root->val;
            }            
        }        
        preorder(root->left,depth+1);        
        preorder(root->right,depth+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        preorder(root,0);
        return sumOfDeepestLeaves;
    }
};
