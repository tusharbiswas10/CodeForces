class Solution {
public:
    void recurFunc(TreeNode* root,vector<int>& state){
      // recursion solution, O(n) time &space
        if(root==NULL){
            return;
        }
        
        recurFunc(root->left, state);
        state.push_back(root->val);
        recurFunc(root->right,state);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>state;
        recurFunc(root,state);
        return state;
    }
};
