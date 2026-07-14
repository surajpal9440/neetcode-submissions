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
    bool isSame(TreeNode* root,TreeNode* subRoot){
        if(root==NULL && subRoot==NULL)
          return true;

        else if(root==NULL || subRoot==NULL)
          return false;

        else if(root->val!=subRoot->val)
           return false;
        else{
            return isSame(root->left,subRoot->left) && isSame(root->right,subRoot->right);
        }       
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
     if(root==NULL)
       return false;
       if(root->val==subRoot->val){
       bool result = isSame(root,subRoot);
       if(result) return result;
       }
      int left=isSubtree(root->left,subRoot);
      int right=isSubtree(root->right,subRoot);

      return left|| right;
    }
};
