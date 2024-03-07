#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
    int i;
    for(i = 0; i < numsSize; i++){
        if(nums[i] >= target){
            return i;
        }
    }
    return i;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    printf("%d\n", searchInsert(nums, numsSize, target));
    return 0;
}