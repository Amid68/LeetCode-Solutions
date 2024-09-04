#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    if (result == NULL) {
        return NULL;
    }

    *returnSize = numsSize;

    result[0] = nums[0];

    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }

    return result;
}
