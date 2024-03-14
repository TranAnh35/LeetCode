#include <stdio.h>
#include <stdlib.h>

int atmostK(int* nums, int numsSize, int goal) {
    int i = 0, j = 0;
    int sum = 0, ans = 0;

    while (i < numsSize) {
        sum += nums[i];

        while (j <= i && sum > goal) {
            sum -= nums[j];
            j++;
        }
        ans += i - j + 1;
        i++;
    }
    return ans;
}

int numSubarraysWithSum(int* nums, int numsSize, int goal) {
    return atmostK(nums, numsSize, goal) - atmostK(nums, numsSize, goal - 1);
}

int main(){
    int nums[] = {1, 0, 1, 0, 1};
    int numsSize = sizeof(nums) / sizeof(int);
    int goal = 2;
    printf("%d\n", numSubarraysWithSum(nums, numsSize, goal));
    return 0;
}