#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int* prefix = (int*)malloc(sizeof(int) * numsSize);
    prefix[0] = 1;
    int* suffix = (int*)malloc(sizeof(int) * numsSize);
    suffix[numsSize - 1] = 1;

    for(int i = 1; i < numsSize; i++){
        prefix[i] = 1;
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for(int i = numsSize - 2; i >= 0; --i){
        suffix[i] = 1;
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for(int i = 0; i < numsSize; i++){
        result[i] = prefix[i] * suffix[i];
    }
    *returnSize = numsSize;
    return result;
}

int main(){
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = productExceptSelf(nums, numsSize, &returnSize);
    for(int i = 0; i < returnSize; i++){
        printf("%d ", result[i]);
    }
    return 0;
}