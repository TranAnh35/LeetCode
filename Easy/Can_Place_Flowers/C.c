#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count =0;
    for(int i=0; i<flowerbedSize; i++){
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)){
            flowerbed[i] =1;
            count ++;
            i++;
        }
    }
    if(count>=n){
        return true;
    }
    else
        return false;
}

int main() {
    int flowerbed[] = {1, 0, 0, 0, 1};
    int flowerbedSize = 5;
    int n = 1;
    printf("%s\n", canPlaceFlowers(flowerbed, flowerbedSize, n) ? "true" : "false");
    return 0;
}