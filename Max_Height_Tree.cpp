int maxHeight(Node* root){
  if(node == NULL) return 0;
  int lefti = maxHeight(root -> left);
  int righti = maxHeight(root -> right);
  
  return 1 + max(lefti, righti);
}
