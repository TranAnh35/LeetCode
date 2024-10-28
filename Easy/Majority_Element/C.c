#include <stdio.h>

int majorityElement(int* nums, int numsSize){
    int count = 1, index = 0;
    for(int i = 0; i < numsSize; ++i){
        if(nums[index] == nums[i])  count++;
        else    count--;
        if(count == 0){
            index = i;
            count = 1;
        }
    }
    return nums[index];
}

int main() {
    int nums[] = {3,2,3};
    int numsSize = 3;
    printf("%d\n", majorityElement(nums, numsSize));
    return 0;
}