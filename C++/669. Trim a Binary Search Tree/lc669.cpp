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
    TreeNode* trimBSTHelper(TreeNode* root,TreeNode* parent, int low, int high)
    {
        if(root==NULL)
            return NULL;
        if(root->val<low)
        {
            if(parent==NULL)
            {
                root=root->right;
                return trimBSTHelper(root,NULL,low,high);
            }                
            else
            {
                parent->left=root->right;
                return trimBSTHelper(parent->left,parent,low,high);
            }
                
        }            
        else if(root->val>high)
        {
            if(parent ==NULL)
            {
                root=root->left;
                return trimBSTHelper(root,NULL,low,high);
            }
            else
            {
                parent->right=root->left;
                return trimBSTHelper(parent->right,parent,low,high);
            }                
        }
        else
        {
            root->left=trimBSTHelper(root->left,root,low,high);
            root->right=trimBSTHelper(root->right,root,low,high);
        }    
        return root;            
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return trimBSTHelper(root, NULL,low,high);               
    }
};
