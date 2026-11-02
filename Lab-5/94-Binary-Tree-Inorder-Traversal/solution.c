void inorder(struct TreeNode* root, int* a, int* k) {
    if (root == NULL) return;

    inorder(root->left, a, k);
    a[(*k)++] = root->val;
    inorder(root->right, a, k);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* a = malloc(100 * sizeof(int));
    *returnSize = 0;

    inorder(root, a, returnSize);

    return a;
}
