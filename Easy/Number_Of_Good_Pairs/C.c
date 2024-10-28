#include <stdio.h>

int numIdenticalPairs(int* nums, int numsSize){
    int count[101] = {0}, result = 0;
    for(int i = 0; i < numsSize; i++){
        count[nums[i]]++;
    }
    for(int i = 0; i < 100; i++){
        result += (count[i] * (count[i] - 1)) / 2;
    }
    return result;
}

int main() {
    int nums[] = {1,2,3,1,1,3};
    int numsSize = 6;
    printf("%d\n", numIdenticalPairs(nums, numsSize));
    return 0;
}