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
    queue <TreeNode *> q; 
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector <vector <int>> ans;
        vector <int> temp;
        
        if(root == NULL) return ans;
        
        q.push(root);
        q.push(NULL);
                
        while(!q.empty())
        {
            root = q.front();
            if(q.front()==NULL)
            {
                ans.push_back(temp);
                temp.clear();
                q.pop();
                
                if(q.empty()) break;
                
                q.push(NULL);
                continue;
            }
            
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
            
            temp.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
    }
};