#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digitsSize == 0) {
        *returnSize = 1;
        int *result = (int *)malloc(sizeof(int));
        result[0] = 1;
        return result;
    }
    else {
        int carry = 1;
        for (int i = digitsSize - 1; i >= 0; i--) {
            if (digits[i] + carry == 10) {
                digits[i] = 0;
                carry = 1;
            }
            else {
                digits[i] += carry;
                carry = 0;
            }
        }
        if (carry == 1) {
            *returnSize = digitsSize + 1;
            int *result = (int *)malloc(sizeof(int) * (*returnSize));
            result[0] = 1;
            for (int i = 0; i < digitsSize; i++) {
                result[i + 1] = digits[i];
            }
            return result;
        }
        else {
            *returnSize = digitsSize;
            return digits;
        }
    }
}

int main() {
    int digits[] = {1,2,3};
    int digitsSize = 3;
    int returnSize;
    int *result = plusOne(digits, digitsSize, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}