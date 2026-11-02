int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;
    *returnColumnSizes = malloc(2000 * sizeof(int));

    if (root == NULL) return NULL;

    int** a = malloc(2000 * sizeof(int*));
    struct TreeNode* q[2000];

    int st = 0, dr = 0;
    q[dr++] = root;

    while (st < dr) {
        int n = dr - st;

        a[*returnSize] = malloc(n * sizeof(int));
        (*returnColumnSizes)[*returnSize] = n;

        for (int i = 0; i < n; i++) {
            struct TreeNode* nod = q[st++];
            a[*returnSize][i] = nod->val;

            if (nod->left) q[dr++] = nod->left;
            if (nod->right) q[dr++] = nod->right;
        }

        (*returnSize)++;
    }

    return a;
}