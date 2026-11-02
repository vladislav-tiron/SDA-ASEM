int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* a = malloc(numsSize * sizeof(int));
    int* temp = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        a[i] = nums[i];

    for (int size = 1; size < numsSize; size *= 2) {
        for (int st = 0; st < numsSize; st += 2 * size) {
            int mij = st + size;
            int dr = st + 2 * size;

            if (mij > numsSize) mij = numsSize;
            if (dr > numsSize) dr = numsSize;
            int i = st, j = mij, k = st;

            while (i < mij && j < dr) {
                if (a[i] <= a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }
            while (i < mij) temp[k++] = a[i++];
            while (j < dr) temp[k++] = a[j++];
        }
        for (int i = 0; i < numsSize; i++)
            a[i] = temp[i];
    }
    free(temp);
    return a;
}
