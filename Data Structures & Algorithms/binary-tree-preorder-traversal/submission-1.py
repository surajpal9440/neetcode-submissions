# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def preorder(root,ans):
    if not root:
        return 

    ans.append(root.val)
    preorder(root.left,ans)
    preorder(root.right,ans)
        
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans=[]
        preorder(root,ans)
        return ans