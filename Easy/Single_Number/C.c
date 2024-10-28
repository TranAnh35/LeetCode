#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    int nums[] = {4,1,2,1,2};
    int numsSize = 5;
    printf("%d\n", singleNumber(nums, numsSize));
    return 0;
}