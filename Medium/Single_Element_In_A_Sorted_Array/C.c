#include <stdio.h>

int singleNonDuplicate(int* nums, int numsSize){
    int temp = 0;
    for(int i=0; i<numsSize; i++){
        temp ^= nums[i];
    }
    return temp;
}

int main() {
    int nums[] = {1,1,2,3,3,4,4,8,8};
    int numsSize = 9;
    printf("%d\n", singleNonDuplicate(nums, numsSize));
    return 0;
}