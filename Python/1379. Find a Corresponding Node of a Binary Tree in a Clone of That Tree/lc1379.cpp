# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:    
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        if((original is None) or (cloned is None)):
                return None;
        if(target==original):            
                return cloned
        leftCloned=self.getTargetCopy(original.left, cloned.left, target)
        if(leftCloned):
            return leftCloned
        rightCloned=self.getTargetCopy(original.right, cloned.right, target) 
        if(rightCloned):
            return rightCloned
        return None
