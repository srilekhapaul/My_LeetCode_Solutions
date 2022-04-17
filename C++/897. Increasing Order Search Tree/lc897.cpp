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
    void inorderBST(TreeNode *root, vector<int> &inorder)
    {
        if(root==NULL)
            return;        
        inorderBST(root->left,inorder);
        inorder.push_back(root->val);
        inorderBST(root->right,inorder);     
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *newRoot =NULL,*t=NULL;
        vector<int> inorder;
        inorderBST(root,inorder);        
        for(int i=0;i<inorder.size();i++)
        {
            TreeNode *newNode =new TreeNode(inorder[i]);
            cout<<newNode->val;
            if(i==0)
            {
                newRoot=newNode;
                t=newRoot;                
            }               
            else
            {
                t->right=newNode;
                t=t->right;
            }           
        }
        return newRoot;
    }
};
