#include <stdio.h>

int findMaxLength(int* nums, int numsSize) {
    int map[2 * numsSize];
    for(int i = 0; i < 2 * numsSize; i++){
        map[i] = -1;
    }
    int sum = 0, length = 0;
    for(int i = 0; i < numsSize; i++){
        sum += (nums[i] == 0) ? -1 : 1;
        if(sum >= 0){
            if(sum == 0)
                length = i + 1;
            else if(map[sum] != -1)
                length = (i - map[sum] > length) ? i - map[sum] : length;
            else
                map[sum] = i;
        }else{
            if(map[sum + 2*numsSize] != -1)
                length = (i - map[sum + 2*numsSize] > length) ? i - map[sum + 2*numsSize] : length;
            else
                map[sum + 2*numsSize] = i;
        
        }
    }
    return length;
}

int main(){
    int nums[] = {0, 1, 0};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d", findMaxLength(nums, numsSize));
    return 0;
}