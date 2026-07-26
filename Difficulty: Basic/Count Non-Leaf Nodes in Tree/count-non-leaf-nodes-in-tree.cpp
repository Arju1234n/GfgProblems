class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        
        // Base Case
        if(root == NULL)
            return 0;
        
        // Leaf Node
        if(root->left == NULL && root->right == NULL)
            return 0;
        
        // Current node is Non-Leaf
        return countNonLeafNodes(root->left)
             + countNonLeafNodes(root->right)
             + 1;
    }
};