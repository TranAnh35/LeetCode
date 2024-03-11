#include <stdio.h>
#include <stdlib.h>

#define N (int)1001

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    if(!nums1Size || !nums2Size){
        *returnSize = 0;
        return NULL;
    }
    int map[N] = {0};
    *returnSize = 0;
    int size = nums1Size < nums2Size ? nums1Size : nums2Size;
    int* res = malloc(sizeof(int) * size);
    for(int i = 0; i < nums1Size; i++)
        map[nums1[i]]++;
    for(int i = 0; i < nums2Size; i++)
        if(map[nums2[i]] > 0){
            res[(*returnSize)++] = nums2[i];
            map[nums2[i]] = 0;
        }
    return res;
}

int main(){
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
    int nums2Size = sizeof(nums2)/sizeof(nums2[0]);
    int returnSize;
    int* res = intersection(nums1, nums1Size, nums2, nums2Size, &returnSize);
    for(int i = 0; i < returnSize; i++)
        printf("%d ", res[i]);
    return 0;
}