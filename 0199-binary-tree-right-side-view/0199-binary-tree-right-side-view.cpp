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
    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans;

        if(root == NULL) return ans;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()) {

            int currSz = q.size();

            for(int i = 0 ; i < currSz ; i++) {

                TreeNode* currNode = q.front();
                q.pop();

                if(i == currSz-1)
                ans.push_back(currNode->val);

                if(currNode->left)
                q.push(currNode->left);
                if(currNode->right)
                q.push(currNode->right);
            }
        }

    return ans;
        
    }
};