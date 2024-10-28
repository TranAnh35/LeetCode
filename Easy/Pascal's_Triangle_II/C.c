#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize){
    int** result = calloc((rowIndex + 1),sizeof(int*));
    (*returnSize) = 0;
    for (int i=0; i<rowIndex + 1; i++)
    {
        result[i] = calloc((i+1),sizeof(int));
        result[i][0] = 1;
        if (i>0)
        {
            result[i][i] = 1;
            for (int j=1; j<=i-1; j++)
            {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
        (*returnSize)++;
    }
    return result[rowIndex];
}

int main() {
    int rowIndex = 3;
    int returnSize;
    int* result = getRow(rowIndex, &returnSize);
    for(int i = 0; i < returnSize; i++){
        printf("%d ", result[i]);
    }
    return 0;
}