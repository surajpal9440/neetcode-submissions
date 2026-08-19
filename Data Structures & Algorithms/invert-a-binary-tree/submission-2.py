# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root==None:
            return None
        
        self.invertTree(root.left)   #self lagana pdta hai curret obj ko call krre hai to
        self.invertTree(root.right)

        # swap method
        root.left,root.right=root.right,root.left

        return root    