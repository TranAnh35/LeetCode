#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows*sizeof(int));
    int** returnTriangle = malloc(numRows*sizeof(int*));
    for(int i = 0; i < *returnSize; i++){
        returnTriangle[i] = malloc((i + 1)*sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        for(int j = 0; j < i + 1; j++){
            if(j == 0 || j == i)
                returnTriangle[i][j] = 1;
            else
                returnTriangle[i][j] = returnTriangle[i - 1][j - 1] + returnTriangle[i - 1][j];
        }
    }
    return returnTriangle;
}

int main() {
    int numRows = 5;
    int returnSize;
    int* returnColumnSizes;
    int** result = generate(numRows, &returnSize, &returnColumnSizes);
    for(int i = 0; i < returnSize; i++){
        for(int j = 0; j < returnColumnSizes[i]; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}