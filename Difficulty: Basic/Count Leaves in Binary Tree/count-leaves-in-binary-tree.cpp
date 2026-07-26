class Solution {
  public:
  
    int countLeaves(Node* root) {
        
        // Base Case
        if(root == NULL)
            return 0;
        
        // Leaf Node
        if(root->left == NULL && root->right == NULL)
            return 1;
        
        // Left + Right subtree ke leaf count
        return countLeaves(root->left) + countLeaves(root->right);
    }
};