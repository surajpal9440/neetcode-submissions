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
    void helper(TreeNode* root,string path,int &ans){
        if(root==NULL){
            return;
        }
        path+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans+=stoi(path);
        }
        helper(root->left,path,ans);
        helper(root->right,path,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        helper(root,"",ans);
        return ans;
    }
};