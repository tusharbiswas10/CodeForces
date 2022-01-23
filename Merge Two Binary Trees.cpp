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
    
    void dfs(TreeNode* root1, TreeNode* root2){
         if(root1 == NULL && root2 == NULL)
            return;
        if(root1 == NULL || root2 == NULL)
            return;
        
        root1->val += root2->val;
        
        dfs(root1->left,root2->left);
        
        if(root1->left==NULL and root2->left !=NULL){
            root1->left=root2->left;
        }
        
        dfs(root1->right,root2->right);
        
        if(root1->right==NULL and root2->right !=NULL){
            root1->right=root2->right;
        }
    }
    
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL){
            return NULL;
        }
        
        if(root1 == NULL){
            return root2;
        }
        if(root2 ==NULL ){
            return root1;
        }
        dfs(root1,root2);
        
        return root1;
    }
};
