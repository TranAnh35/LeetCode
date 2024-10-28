#include <stdio.h>
#include <stdlib.h>

// #define N 1000000001

// int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     if (nums1Size == 0 || nums2Size == 0) return -1;
//     int* map = malloc(sizeof(int) * N);
//     for(int i = 0; i < nums1Size; i++)
//         map[nums1[i]]++;
//     for(int i = 0; i < nums2Size; i++)
//         if(map[nums2[i]] > 0) return nums2[i];
//     return -1;
// }

int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if(nums1Size == 0 || nums2Size == 0) return -1;
    int i = 0, j = 0;
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] == nums2[j]) return nums1[i];
        else if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
    }
    return -1;
}

int main(){
    int nums1[] = {1, 2, 3};
    int nums2[] = {2, 4};
    int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
    int nums2Size = sizeof(nums2)/sizeof(nums2[0]);
    printf("%d\n", getCommon(nums1, nums1Size, nums2, nums2Size));
    return 0;
}