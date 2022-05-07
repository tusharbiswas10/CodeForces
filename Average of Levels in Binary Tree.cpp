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
    vector<double> averageOfLevels(TreeNode* root) {
        // BFS solution
        vector<double> result; // result vector;
        queue<TreeNode*> q;  // queue for bfs
        
        q.push(root);
        
        while(!q.empty()){
            int count=0;
            long long sum=0;
            
            int n=q.size();
            //  iterate till every element of that level is not counted 
            while(n>0){
                TreeNode* currentNode=q.front();
                q.pop();
                n--;
                count++;
                sum+=currentNode->val;
                if(currentNode->left){
                   q.push(currentNode->left); 
                } 
                if(currentNode->right) {
                  q.push(currentNode->right);  
                }
            }
            
            result.push_back(sum/(double)count);
        }
        
        return result;
    }
};
