int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // naya index, jaha sahi element rakhenge

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
