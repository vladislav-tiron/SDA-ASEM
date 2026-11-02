struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if (root == NULL) {
        struct TreeNode* nou = malloc(sizeof(struct TreeNode));
        nou->val = val;
        nou->left = NULL;
        nou->right = NULL;
        return nou;
    }

    if (val < root->val)
        root->left = insertIntoBST(root->left, val);
    else
        root->right = insertIntoBST(root->right, val);

    return root;
}