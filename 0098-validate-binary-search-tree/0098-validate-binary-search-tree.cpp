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


    bool isBST(TreeNode* root,TreeNode* leftM,TreeNode* rightM) {

        if(root == NULL)return true;

        if(leftM && root->val <= leftM->val)return false;
        if(rightM && root->val >= rightM->val)return false;

        return isBST(root->left,leftM,root)
        && isBST(root->right,root,rightM);


    }
    bool isValidBST(TreeNode* root) {

        return isBST(root,NULL,NULL);
        
    }
};