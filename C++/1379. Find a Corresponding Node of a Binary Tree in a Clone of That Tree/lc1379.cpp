/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {

public:
    void preorder(TreeNode* origRoot, TreeNode* clonRoot, TreeNode* target,TreeNode **clonTarget)
    {
        if(origRoot==NULL or clonRoot==NULL)
            return;
        if(target==origRoot)
        {
            *clonTarget=clonRoot;
            return;
        }
        preorder(origRoot->left, clonRoot->left,target,clonTarget);        
        preorder(origRoot->right, clonRoot->right,target,clonTarget);        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode *clonTarget=NULL;
        preorder(original, cloned, target,&clonTarget);
        return clonTarget;
    }
};
