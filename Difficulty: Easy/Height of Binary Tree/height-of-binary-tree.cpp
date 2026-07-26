class Solution {
  public:
    int height(Node* root) {

        if(root == NULL)
            return -1;

        int leftHeight = height(root->left);

        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }
};