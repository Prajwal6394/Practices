bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> res;
        res.push(root);
        while(!res.empty()){
            int n = res.size();
            bool foundX = false;
            bool foundY = false;
            
            for(int i = 0; i < n; i++){
                TreeNode* node = res.front();
                res.pop();
                if(node -> val == x) foundX = true;
                if(node -> val == y) foundY = true;
                
                if(node -> left and node -> right){
                    if(node -> left -> val == x and node -> right -> val == y ||
                      node -> left -> val == y and  node -> right -> val == x){
                        return false;
                    }
                }
                if(node -> left) res.push(node -> left);
                if(node -> right) res.push(node -> right);
            }
             if(foundX and foundY){
                 return true;   
                }
        }
        return false;
    }
