#include <stdio.h>

int integerBreak(int n){
    return n <= 3 ? n - 1 : (n % 3 == 0 ? (int)pow(3, n / 3) : (n % 3 == 1 ? (int)pow(3, n / 3 - 1) * 4 : (int)pow(3, n / 3) * 2));
}

int main() {
    int n = 10;
    printf("%d\n", integerBreak(n));
    return 0;
}