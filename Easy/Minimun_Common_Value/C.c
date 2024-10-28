#include <stdio.h>

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

int main() {
    int nums1[] = {1,2,3,4,5};
    int nums1Size = 5;
    int nums2[] = {4,5,6,7,8};
    int nums2Size = 5;
    printf("%d\n", getCommon(nums1, nums1Size, nums2, nums2Size));
    return 0;
}