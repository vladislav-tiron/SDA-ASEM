int searchInsert(int* nums, int numsSize, int target) {
    int st = 0, dr = numsSize - 1;

    while (st <= dr) {
        int mij = (st + dr) / 2;

        if (nums[mij] == target)
            return mij;

        if (nums[mij] < target)
            st = mij + 1;
        else
            dr = mij - 1;
    }

    return st;
}