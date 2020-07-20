class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int n = Q.size();
            vector<int> nodes(n);
            for(int i = 0; i < n; ++i)
            {
                TreeNode* node = Q.front();
                nodes[i] = node->val;
                Q.pop();
                if(node->left) Q.push(node->left);
                if(node->right) Q.push(node->right);
            }
            result.push_back(nodes);
        }
        reverse(result.begin(), result.end());
        return result;
        
        /*
        
        if(root==NULL)
            return {{0}};
        vector<vector<int>> ans;
        queue<int> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            auto pendingRoot = q.front();
            if(pendingRoot==NULL)
                ans[]
            q.pop();
            
        }
        */
    }
};
