#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp); 
    for (int i = 1; i < numsSize; i++)
        if (nums[i] == nums[i-1])
            return true;

    return false;
}

int main() {
    int nums[] = {1,2,3,1};
    int numsSize = 4;
    printf("%s\n", containsDuplicate(nums, numsSize) ? "true" : "false");
    return 0;
}