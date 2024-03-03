#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main(){
    int nums[] = {3, 2, 2, 3};
    int numsSize = 4;
    int val = 3;
    printf("%d\n", removeElement(nums, numsSize, val));
    return 0;
}