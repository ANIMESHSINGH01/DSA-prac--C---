bool existsInBinaryTree(TreeNode* root, int binaryNumber) {
    if (root == NULL)
        return false;

    
    else if (root->val == binaryNumber)
        return true;
} return existsInBinaryTree(root->left, binaryNumber) || existsInBinaryTree(root->right, binaryNumber);