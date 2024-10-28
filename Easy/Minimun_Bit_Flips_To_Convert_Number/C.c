#include <stdio.h>

int minBitFlips(int start, int goal) {
    unsigned int temp = start ^ goal;
    int count = 0;
    while(temp != 0){
        int test = temp & 1;
        count += test;
        temp = temp >> 1;
    }

    return count;   
}

int main() {
    int start = 10;
    int goal = 7;
    printf("%d\n", minBitFlips(start, goal));
    return 0;
}