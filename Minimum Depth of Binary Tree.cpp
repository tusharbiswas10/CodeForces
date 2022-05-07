int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        int result=0;
        q.push(root);
        while(!q.empty()){
            

            result++;
            int n=q.size();
            while(n>0){
                TreeNode* currentNode=q.front();
                q.pop();
                n--;
                if(currentNode->left){
                    q.push(currentNode->left);
                }
                if(currentNode->right){
                    q.push(currentNode->right);
                }
                if(!currentNode->left and !currentNode->right ) return result;
            }
        }
        
        return result;
    }
