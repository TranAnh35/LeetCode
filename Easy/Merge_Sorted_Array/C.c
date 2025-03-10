#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int i, i1, i2;
    i1 = m - 1;
    i2 = n - 1;
    i = nums1Size - 1; 
    while (i1 >= 0 && i2 >= 0) {
        if (nums1[i1] > nums2[i2]) {
            nums1[i--] = nums1[i1--];
        } else {
            nums1[i--] = nums2[i2--];
        }
    }
    
    while (i2 >= 0) {
        nums1[i--] = nums2[i2--];
    }
}

int main(){
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2,5,6};
    int n = 3;
    merge(nums1, 6, m, nums2, n, n);
    for (int i = 0; i < 6; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    return 0;
}