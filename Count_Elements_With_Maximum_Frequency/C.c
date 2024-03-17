#include <stdio.h>

int maxFrequencyElements(int* nums, int numsSize) {
    int map[101] = {0};
    int max = 0;
    for(int i = 0; i < numsSize; i++){
        map[nums[i]]++;
        max = max < map[nums[i]] ? map[nums[i]] : max;
        if(map[nums[i]] > 1)
            nums[i] = 0;
    }
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        if(map[nums[i]] == max)
            count++;
    }

    return count * max;
}

int main(){
    int nums[] = {1, 2, 2, 3, 1, 4};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("%d\n", maxFrequencyElements(nums, numsSize));
    return 0;
}